#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin>>n;
    
    for(int i=0 ; i<n ; i++) {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    
    int k;
    cout<<"Target sum: ";
    cin>>k;
    bool flag = false;

    for(int i=0 ; i<v.size() - 1 ; i++) {
        for(int j=i+1 ; j<v.size() ; j++) {
            if(v[i] + v[j] == k) {
                flag = true;
            }
        }
    }

    (flag)?cout<<"Yes":cout<<"No";
}