#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
}