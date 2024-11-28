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
    if(v.empty())
    return;

    queue<Node*> q;
    root = new Node(v[0]);
    q.push(root);

    int i = 1;

    while(!q.empty() && i<v.size()) {
        Node* temp = q.front();
        q.pop();

        if(v[i] != -1) {
            temp -> left = new Node(v[i]);
            q.push(temp -> left);
        }
        i++;

        if(v[i] != -1 && i<v.size()) {
            temp -> right = new Node(v[i]);
            q.push(temp -> right);
        }
        i++;
    }
}

bool checkForBST(Node* root,Node* left,Node* right) {
    if(root == NULL) {
        return true;
    }
    
    if(left != NULL && root -> data <= left -> data)
    return false;

    if(right != NULL && root -> data >= right -> data)
    return false;

    return checkForBST(root -> left,left,root) && checkForBST(root -> right,root,right);
}

bool isBST(Node* root) {
    return checkForBST(root,NULL,NULL);
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
    if(isBST(root)) {
        cout<<"It is a BST";
    }
    else{
        cout<<"It is not a BST";
    }
}