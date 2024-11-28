#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d=0){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1) {
        return NULL;
    }

    cout<<"Enter data for left of "<<data<<": ";
    root -> left = buildTree(root -> left);
    cout<<"Enter data for right of "<<data<<": ";
    root -> right = buildTree(root -> right);


    return root;
}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL) {
            //ek level complete ho gya
            cout<<endl;
            if(!q.empty()){
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

int height(node* root) {
    if(root == NULL) {
        return 0;
    }

    int left = height(root -> left);
    int right = height(root -> right);

    int ans = max(left,right)+1;

    return ans;
}

pair<int,int> diameterFast(node* root) {
    if(root == NULL) {
        return make_pair(0,0);
    }

    pair<int,int> left = diameterFast(root -> left);
    pair<int,int> right = diameterFast(root -> right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int,int> ans;
    ans.first = max(op1,max(op2,op3));
    ans.second = max(left.second,right.second) + 1;

    return ans;
}

int diameter(node* root) {
    return diameterFast(root).first;
}

int main(){
    node* root = NULL;

    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1  5 17 -1 -1 -1
    levelOrderTraversal(root);

    cout<<"Height: "<<height(root);

    cout<<"Diameter: "<<diameter(root);

    return 0;
}