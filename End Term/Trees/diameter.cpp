#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d = 0) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void buildFromLevelOrder(Node* &root, vector<int> v) {
    queue<Node*> q;
    root = new Node(v[0]);
    q.push(root);

    int i=1;

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(i<v.size() && v[i] != -1) {
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

int height(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int left = height(root -> left);
    int right = height(root -> right);

    int ans = max(left , right) +1 ;

    return ans;
}

int diameter(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int left = diameter(root -> left);
    int right = diameter(root -> right);

    int h = height(root -> left) + height(root -> right) + 1;

    int ans = max(left,max(right,h));

    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0 ; i<n ; i++) {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    Node* root = NULL;
    buildFromLevelOrder(root,v);

    cout<<"Diameter is: "<<diameter(root);
}