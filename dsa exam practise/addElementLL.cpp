#include<bits/stdc++.h>
using namespace std;
int main(){
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

    cout<<"Enter element you want to add"<<endl;
    int ele;
    cin>>ele;
    v.pop_back();
    v.push_back(ele);
    v.push_back(-1);


    // v.pop_back(); //-1 hata diya

    //1 2 3 4
    // 5 add krna hai 1 ke pehle

    // reverse(v.begin(),v.end()); //4 3 2 1
    // v.push_back(ele);
    // reverse(v.begin(),v.end());
    // v.push_back(-1);
    cout<<"final array"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
}