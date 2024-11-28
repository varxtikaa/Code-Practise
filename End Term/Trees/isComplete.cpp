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

// int countNodes(Node* root) {
//     if(root == NULL) {
//         return 0;
//     }

//     return 1 + countNodes(root -> left) + countNodes(root -> right);
// }
int countNodes(vector<int> v) {
    if(v.empty()) {
        return 0;
    }
    int count=0;
    for(auto i:v) {
        if(i != -1) {
            count++;
        }
    }

    return count;
} 

bool isComplete(Node* root, int index, int n) {
    if(root == NULL) {
        return true;
    }
    if(index >= n) {
        return false;
    }

    return isComplete(root -> left,2*index+1,n) && isComplete(root -> right,2*index+2,n);
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

    int index = 0;
    int numberOfNodes = countNodes(v);

    if(isComplete(root,index,numberOfNodes)) {
        cout<<"Complete";
    }
    else{
        cout<<"Not Complete";
    }
}