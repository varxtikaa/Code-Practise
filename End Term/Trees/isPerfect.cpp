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

void buildFromLevelOrder(Node* & root,vector<int> v) {
    queue<Node*> q;
    root = new Node(v[0]);
    q.push(root);

    int i = 1;

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(i<v.size() && v[i]!=-1) {
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

int height(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int left = height(root -> left);
    int right = height(root -> right);

    int ans = max(left,right) + 1;

    return ans;
}
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

bool isPerfect(Node* root,vector<int> v) {
    
    int h = height(root);
    int maxNodes = pow(2,h) - 1;
    int totalNodes = countNodes(v);

    if(maxNodes == totalNodes) {
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int n;
    cin>>n;
    vector<int> v;

    for(int i = 0; i<n ; i++) {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    Node* root = NULL;
    buildFromLevelOrder(root,v);

    // cout<<height(root)<<endl;
    // cout<<countNodes(v)<<endl;
    // cout<<pow(2,height(root)) - 1;

    
    if(isPerfect(root,v)) {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}