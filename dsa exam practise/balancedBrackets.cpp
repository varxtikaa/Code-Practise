#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string exp) {
    stack<char> s;
    int len = exp.length();
    for(int i=0 ; i<len ; i++) {
        char ch=exp[i];
        if(ch=='(' || ch=='{' || ch=='[') {
            s.push(ch);
        }
        else if(ch==')' || ch=='}' || ch==']') {
            if((s.top()=='(' && ch==')') || (ch=='}' && s.top()=='{') || (ch==']' && s.top()=='[')){
                s.pop();
            }
            else
            return false;
        }
    }
    if(s.empty())
    return true;
    else
    return false;
}

int main() {
    string s;
    getline(cin,s);
    if(isBalanced(s)){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced";
    }
}