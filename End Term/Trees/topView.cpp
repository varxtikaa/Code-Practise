#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* right;
    Node* left;

    Node(int d=0) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

void buildFromLevelOrder(Node* &root, vector<int> v) {
    if(v.empty()) return;

    queue<Node*> q;
    root = new Node(v[0]);
    q.push(root);
    int i = 1;

    while(!q.empty() && i<v.size()) {
        Node* temp = q.front();
        q.pop();

        if(v[i] != -1) {
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

// void topView(Node* root) {
//     //map and queue
//     //agar ek distance ki node present hai to nahi dalemge agar nhi ahi to push krdenge map me
//     if(root == NULL) return;

//     //queue me node aur uska horizontal distance hd
//     queue<pair<Node*,int>> q;
//     //map me horizontal distance and data
//     map<int,int> mapi;
//     q.push({root,0});
//     while(!q.empty()) {
//         auto i = q.front();
//         q.pop();

//         int hd = i.second;

//         //agar already hd ke corresponding value nhi hai
//         if(mapi.find(hd) == mapi.end()){
//             mapi[hd] = i.first -> data;
//         }
//         if(i.first -> left != NULL) {
//             q.push({root -> left, hd - 1});
//         }
//         if(i.first -> right != NULL){
//             q.push({root -> right , hd + 1});
//         }

//     }
//     for(auto i:mapi) {
//         cout<<i.second<<" ";
//     }

// }

void topView(Node* root) {
    if(root == NULL) return;

    queue<pair<Node*,int>> q;
    //queue me pair hai
    //pair me node ur uska hd hai
    map<int,int> mapi;
    //map me har ek hd aur uspe node ki value hai

    q.push({root,0}); // root pe hd 0 hai

    while(!q.empty()) {
        auto temp = q.front();
        q.pop();

        int hd = temp.second;

        //agar hd already map me nhi hai toh hi add kro
        if(mapi.find(hd) == mapi.end()){
            mapi[hd] = temp.first -> data;
        }

        if(temp.first -> left != NULL) {
            q.push({temp.first->left , hd-1});
        }

        if(temp.first->right != NULL) {
            q.push({temp.first->right , hd+1});
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

    topView(root);
}