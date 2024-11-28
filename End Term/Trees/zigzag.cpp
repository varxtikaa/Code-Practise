#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d=0){
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

// vector<vector<int>> zigzagTraversal(Node* root) {
//     vector<vector<int>> ans;
//     if(root == NULL) {
//         return ans;
//     }

//     queue<Node*> q;
//     q.push(root);
//     bool leftToRight = true;
    
//     while(!q.empty()) {
//         int size = q.size();
//         vector<int> row(size);

//         for(int i=0 ; i<size ; i++) {
//             Node* temp = q.front();
//             q.pop();

//             int id = leftToRight?i:size-i-1;
//             row[id] = temp -> data;

//             if(temp -> left) {
//                 q.push(temp -> left);
//             }

//             if(temp -> right) {
//                 q.push(temp -> right);
//             }
//         }

//         ans.push_back(row);
//         leftToRight = !leftToRight;
//     }

//     return ans;
// }

vector<vector<int>> zigzagTraversal(Node* root) {
    vector<vector<int>> v;

    if(root == NULL) {
        return v;
    }

    queue<Node*> q;
    q.push(root);
    bool leftToRight = true;

    while(!q.empty()) {
        int size = q.size();
        vector<int> row(size);

        for(int i=0 ; i<size ; i++){
            Node* temp = q.front();
            q.pop();

            int id = leftToRight?i:size-i-1;
            row[id] = temp -> data;

            if(temp -> left) {
                q.push(temp -> left);
            }
            if(temp -> right) {
                q.push(temp -> right);
            }
        }
        v.push_back(row);
        leftToRight = !leftToRight;
    }

    return v;
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

    vector<vector<int>> ans = zigzagTraversal(root);

    for(auto i: ans) {
        for(auto j:i) {
            cout<<j<<" ";
        }
    }

}