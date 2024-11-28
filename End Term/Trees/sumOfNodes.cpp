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

void buildFromLevelOrder(Node* &root,vector<int> v) 
{
    queue<Node* > q;
    root = new Node(v[0]);
    q.push(root);

    int i = 1;

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

int sumOfNodes(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int left = sumOfNodes(root -> left);
    int right = sumOfNodes(root -> right);

    return root -> data + left + right;
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

    cout<<sumOfNodes(root);
}