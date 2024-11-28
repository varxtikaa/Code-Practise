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

void buildFromLevelOrder(Node* &root, vector<int> v) {
    queue<Node*> q;
    root = new Node(v[0]);
    q.push(root);

    int i=1;
    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        //left 
        if(i<v.size() && v[i] != -1) {
            temp -> left = new Node(v[i]);
            q.push(temp -> left);
        }
        i++;

        //right
        if(i<v.size() && v[i] != -1) {
            temp -> right = new Node(v[i]);
            q.push(temp -> right);
        }
        i++;

    }
}

void levelOrderTraversal(Node* root) {
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
            if(temp -> right) {
                q.push(temp -> right);
            }
        }
    }
}

int main() {
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0 ; i<n ;i++) {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    Node* root = NULL;

    buildFromLevelOrder(root,v);
    levelOrderTraversal(root);
    //1 3 7 -1 -1 11 -1 -1  5 17 -1 -1 -1

    //7
    //1 2 3 -1 4 5 -1
}