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

int countLeafNodes(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int count = 0;

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            if(temp -> left == NULL && temp -> right == NULL) {
                count++;
            }
            if(temp -> left) {
                q.push(temp -> left);
            }
            if(temp -> right) {
                q.push(temp -> right);
            }
        }
    }

    return count;
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

    cout<<countLeafNodes(root);
}