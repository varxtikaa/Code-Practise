#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);

    // vector<vector<string>> strs;
    string newString;
    string word = "";
    for(char i:s) {
        // cout<<i;
        if(i != ' ') {
            word+=i;
        }
        else{
            reverse(word.begin(),word.end());
            newString += word+" ";
            word = "";
        }
    }
    reverse(word.begin(),word.end());
    newString += word;
    
    cout<<endl;


    cout<<newString;
}