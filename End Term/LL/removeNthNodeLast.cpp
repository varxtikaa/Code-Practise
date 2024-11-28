#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int ele;
    while(ele != -1) {
        cin>>ele;
        v.push_back(ele);
    }

    //1 2 3 4 -1
    //remove last 2nd
    //1 2 3 -1

    // v.pop_back(); //remove null

    vector<int> ans;

    int k;
    cout<<"Position from end you want to delete: ";
    cin>>k;

    for(int i=0;i<v.size();i++) {
        if(i == v.size() - k - 1) {
            continue;
        }
        ans.push_back(v[i]);
    }

    for(auto i:ans) {
        cout<<i<<" ";
    }

}