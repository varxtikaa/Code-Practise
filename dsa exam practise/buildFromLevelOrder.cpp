#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d=0){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    int d;
    cin>>d;
    root = new node(d);
    q.push(root);
    // q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout<<"Enter data for left of "<<temp -> data<<": ";
        int leftData;
        cin>>leftData;

        if(leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout<<"Enter data for right of "<<temp -> data<<": ";
        int rightData;
        cin>>rightData;

        if(rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            //ek order complete
            cout<<endl;
            if(!q.empty()) {
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

    // root = buildTree(root);
    // //1 3 7 -1 -1 11 -1 -1  5 17 -1 -1 -1
    // inorder(root);
    // cout<<endl;
    // preorder(root);
    // cout<<endl;
    // postorder(root);

    buildFromLevelOrder(root);
    levelOrderTraversal(root);

}