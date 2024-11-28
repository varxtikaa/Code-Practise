#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    rotate(v.end(),v.end()-2,v.begin());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}