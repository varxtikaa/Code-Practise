#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int ele;

    while(ele != -1) {
        cin>>ele;
        v.push_back(ele);
    }

    unordered_map<int,int> count;

    for(auto i:v) {
        count[i]++;
    }

    cout<<"Duplicate elements are: "<<endl;
    for(auto i:count) {
        if(i.second > 1) {
            cout<<i.first<<" ";
        }
    }
}