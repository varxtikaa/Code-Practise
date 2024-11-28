#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d=0) {
        this -> data = d;
        this -> right = NULL;
        this -> left = NULL;
    }
};

Node* buildFromSortedArray(vector<int> v,int start,int end) {
    if(start > end) {
        return NULL;
    }

    int mid = (start+end)/2;
    Node* root = new Node(v[mid]);

    root -> left = buildFromSortedArray(v,start,mid-1);

    root -> right = buildFromSortedArray(v,mid+1,end);

    return root;
}

void levelOrderTraversal(Node* root) {
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
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
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

void preorder(Node* root) {
    if(root == NULL) return;

    cout<<root -> data<<" ";
    preorder(root -> left);
    preorder(root -> right);
}

int main() {
    vector<int> v={ 1, 2, 3, 4, 5, 6, 7 };
    Node* root = buildFromSortedArray(v,0,v.size()-1);

    // levelOrderTraversal(root);
    preorder(root);
}