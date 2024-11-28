#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d=0) 
    {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* insertIntoBST(Node* root, int d) {
    if(root == NULL) {
        root = new Node(d);
        return root;
    }

    if(d>root -> data) {
        root -> right = insertIntoBST(root -> right,d);
    }
    else{
        root -> left = insertIntoBST(root -> left,d);
    }

    return root;
}

void takeInput(Node* &root) {
    int ele;
    cin>>ele;
    while(ele != -1) {
        root = insertIntoBST(root,ele);
        cin>>ele;
    }
}

void levelOrderTraversal(Node* root) {
    if(root == NULL) {
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout<<temp -> data<<" ";
            if(temp -> left) {
                q.push(temp -> left);
            }
            if(temp -> right) {
                q.push(temp -> right);
            }
        }
    }
}

int main() {
    Node* root = NULL;
    takeInput(root);

    cout<<"Level order: ";
    levelOrderTraversal(root);
}