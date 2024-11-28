#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    getline(cin,s);
    cout<<"Enter the substring to find:"<<endl;
    string substr;
    cin>>substr;
    for(int i = 0 ; i<s.size() ; i++) {
        if(i+substr.size() < s.size()){
            if(s.substr(i+substr.size()) == substr) {
                cout<<i<<" "<<i+substr.size();
                break;
            }
        }
    }
}