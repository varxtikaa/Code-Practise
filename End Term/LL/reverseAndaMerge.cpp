#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1,v2;
    int ele;
    cout<<"Enter Linked List 1: ";
    while(ele != -1) {
        cin>>ele;
        v1.push_back(ele);
    }

    cout<<"Enter Linked List 2: ";
    int ele2;
    while(ele2 != -1) {
        cin>>ele2;
        v2.push_back(ele2);
    }

    v1.pop_back();
    v2.pop_back();
    //reverse
    cout<<"Reversed Linked List 1 is: "<<endl;

    reverse(v1.begin(),v1.end());
    v1.push_back(-1);

    for(auto i:v1) {
        cout<<i<<" ";
    }
    cout<<endl;

    v1.pop_back();

    //merge two linked lists
    v1.insert(v1.end(),v2.begin(),v2.end());
    sort(v1.begin(),v1.end());
    v1.push_back(-1);

    cout<<"Merged and sorted LLs are: ";

    for(auto i:v1) {
        cout<<i<<" ";
    }
}