#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d=0){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {
    cout<<"Enter the data: ";
    int d;
    cin>>d;
    root = new node(d);

    if(d==-1) {
        return NULL;
    }

    cout<<"data for left of "<<d<<": ";
    root -> left = buildTree(root -> left);
    cout<<"data for right of "<<d<<": ";
    root -> right = buildTree(root -> right);

    return root;
}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            //ek order complete ho gya
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
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
    node* root = NULL;

    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1  5 17 -1 -1 -1
    levelOrderTraversal(root);

    return 0;
}