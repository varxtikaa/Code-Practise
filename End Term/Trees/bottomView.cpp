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
    if(v.empty()) return;

    queue<Node*> q;
    root = new Node(v[0]);
    q.push(root);

    int i = 1;

    while(!q.empty() && i<v.size()) {
        Node* temp = q.front();
        q.pop();

        if(v[i] != -1){
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

void bottomView(Node* root){
    if(root == NULL) return;

    //queue banao with node and its hd
    queue<pair<Node*,int>> q;
    //map banao with hd and its node ki value
    map<int,int> mapi;
    q.push({root,0});

    while(!q.empty()) {
        auto temp = q.front();
        q.pop();

        int hd = temp.second;

        // if(mapi.find(hd) == mapi.end()) {
            mapi[hd] = temp.first -> data;
        // }

        if(temp.first -> left != NULL) {
            q.push({temp.first -> left , hd-1});
        }

        if(temp.first -> right != NULL) {
            q.push({temp.first -> right, hd+1});
        }
    }

    for(auto i:mapi) {
        cout<<i.second<<" ";
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

    bottomView(root);
}