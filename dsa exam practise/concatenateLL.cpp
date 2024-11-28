#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1,v2;
    int val1;
    cout<<"Enter first Linked List"<<endl;
    while(val1 != -1) {
        cin>>val1;
        v1.push_back(val1);
    }

    cout<<"Enter second Linked List"<<endl;
    int val2;
    while(val2 != -1) {
        cin>>val2;
        v2.push_back(val2);
    }

    v1.pop_back();

    v1.insert(v1.end(),v2.begin(),v2.end());
    // sort(v1.begin(),v1.end());
    v1.pop_back();
    sort(v1.begin(),v1.end());
    v1.push_back(-1);

    for(auto i:v1) {
        cout<<i<<" ";
    }
}