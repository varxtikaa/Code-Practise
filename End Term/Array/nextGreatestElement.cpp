#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> v;
    vector<int> result;

    for(int i=0 ; i<n ;i++) {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    for(int i=0 ; i<n ; i++) {
        int ans = INT_MAX;
        for(int j=i+1 ; j<n ; j++) {
            if( i == j) {
                continue;
            }
            if(v[i] < v[j]) {
                ans = min(ans,v[j]);
            }
        }
        if( ans == INT_MAX) {
            result.push_back(-1);
        }
        else{
            result.push_back(ans);
        }
    }

    for(auto i:result) {
        cout<<i<<" ";
    }
}
