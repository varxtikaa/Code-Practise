#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);

    vector<string> strs;
    string word="";
    for(auto i:s) {
        if(i == ' ') {
            strs.push_back(word);
            strs.push_back(" ");
            word="";
        }
        else{
            word+=i;
        }
    }

    strs.push_back(word);
    reverse(strs.begin(),strs.end());

    string newString;

    for(auto i:strs) {
        newString+=i;
    }


    cout<<newString;
}

