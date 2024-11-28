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

void Postorder(Node* root) {
    if(root == NULL) {
        return;
    }

    Postorder(root -> left);
    Postorder(root -> right);
    cout<<root -> data<<" ";
}

void Preorder(Node* root) {
    if(root == NULL) {
        return;
    }

    cout<<root -> data<<" ";
    Preorder(root -> left);
    Preorder(root -> right);
}

void Inorder(Node* root) {
    if(root == NULL) {
        return;
    }

    Inorder(root -> left);
    cout<<root -> data<<" ";
    Inorder(root -> right);
}

void LevelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            if(!q.empty())
            q.push(NULL);
            continue;
        }
        else{
        cout<<temp -> data<<" ";

        if(temp -> left){
            q.push(temp -> left);
        }
        if(temp -> right) {
            q.push(temp -> right);
        }
        }
    }
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

    cout<<"Levelorder: ";
    LevelOrderTraversal(root);
    cout<<endl;
    cout<<"Preorder: ";
    Preorder(root);
    cout<<endl;
    cout<<"Postorder: ";
    Postorder(root);
    cout<<endl;
    cout<<"Inorder: ";
    Inorder(root);
    cout<<endl;
}