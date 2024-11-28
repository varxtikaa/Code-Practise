#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int val;
    while(val!=-1){
        cin>>val;
        v.push_back(val);
    }

    cout<<"Original Linked List"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Enter element you want to add and the index"<<endl;
    int ele,index;
    cin>>ele>>index;

    v.insert(v.begin()+index,ele);

    for(int i:v) {
        cout<<i<<" ";
    }

}