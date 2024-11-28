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

int height(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int left = height(root -> left);
    int right = height(root -> right);

    int ans = max(left,right) +1;

    return ans;
}

bool isBalanced(Node* root) {

    if(root == NULL) {
        return false;
    }

    int left = height(root -> left);
    int right = height(root -> right);

    if(abs(left - right) > 1) {
        return false;
    }

    //no else kyunki fir bas ek bari check krke khtm ho jata function
    // else{
    //     return true;
    // }

    return isBalanced(root -> left) && isBalanced(root -> right);
}

void buildFromLevelOrder(Node* &root, vector<int> v) {
    queue<Node*> q;
    root = new Node(v[0]);
    q.push(root);

    int i = 1;

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

    if(isBalanced(root)) {
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced";
    }
}