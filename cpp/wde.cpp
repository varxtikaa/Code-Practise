#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int x,a,b;
    cin>>x;
    cin>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a,v.end()+b);
    cout<<v.size()<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}
