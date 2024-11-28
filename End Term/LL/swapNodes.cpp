#include<bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    vector<int> v;

    int ele;
    while(ele != -1) {
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"Enter the elements you want to swap: "<<endl;
    cin>>a>>b;

    int i1,i2;
    for(int i=0;i<v.size();i++) {
        if(v[i] == a) {
            i1=i;
        }
        else if(v[i] == b) {
            i2=i;
        }
    }

    swap(v[i1],v[i2]);

    for(auto i:v) {
        cout<<i<<" ";
    }
}