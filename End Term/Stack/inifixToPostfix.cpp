#include<bits/stdc++.h>
using namespace std;

int precedence(char c) {
    if(c == '+' || c == '-'){
        return 1;
    }
    if(c == '*'){
        return 2;
    }
    if(c == '/') {
        return 3;
    }

}

string postfix(string exp) {
    stack<char> s;
    int len = exp.size();
    string p="";

    for(int i=0 ; i<len ; i++) {
        char ch = exp[i];
        if(isalpha(ch) || isdigit(ch)) {
            p+=ch;
        }
        else if(ch == '('){
            s.push(ch);
        }
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            while(!s.empty() && (precedence(s.top())>=precedence(ch)) ){
                p+=s.top();
                s.pop();
            }
            s.push(ch);
        }
        else if(ch == ')') {
            while(!s.empty() && s.top()!='(') {
                p+=s.top();
                s.pop();
            }
            s.pop();
        }
    }

    if(!s.empty()) {
        while(!s.empty()) {
            p+=s.top();
            s.pop();
        }
    }
    return p;
}

int main() {
    string s;
    cin>>s;
    string p = postfix(s);
    cout<<p;
}