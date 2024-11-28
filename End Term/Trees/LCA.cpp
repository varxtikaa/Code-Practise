#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d=0) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void buildFromLevelOrder(Node* &root,vector<int> v) {
    queue<Node*> q;
    root = new Node(v[0]);
    q.push(root);

    int i = 1;

    while(!q.empty()&& i<v.size()) {
        Node* temp = q.front();
        q.pop();

        if( v[i] != -1) {
            temp -> left = new Node(v[i]);
            q.push(temp -> left);
        }
        i++;

        if(i<v.size() && v[i] != -1) {
            temp -> right = new Node(v[i]);
            q.push(temp -> right);
        }
        i++;

    }
}

Node* findLCANode(Node* root, int n1, int n2) {
    //base case
    if(root == NULL) {
        return NULL;
    }
    //agar root ki value n1 ya n2 mtlb dura vala uska ancestor hai
    if(root -> data == n1 || root -> data == n2) {
        return root;
    }

    //n1 ya n2 left and right subtrees me find kro
    Node* left = findLCANode(root -> left, n1 , n2);
    Node* right = findLCANode(root -> right, n1 , n2);

    //agar dono non null hai mtlb ek left me hai ek right me toh current node lca hai
    if(left && right) {
        return root;
    }

    //varna check left me ya right me
    return (left!=NULL)?left:right;
}



int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0 ; i<n ; i++ ){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    Node* root = NULL;
    buildFromLevelOrder(root,v);

    int a,b;
    cout<<"Kiske LCA dhundhna hai ?";
    cin>>a>>b;
    if(findLCANode(root,a,b))
    cout<<"LCA is "<<findLCANode(root,a,b)->data;
    else
    cout<<"No LCA found";
}