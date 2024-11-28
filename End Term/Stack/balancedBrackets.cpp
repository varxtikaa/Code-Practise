#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string exp) {
    stack<int> s;
    int len = exp.size();

    for(int i=0;i<len;i++) {
        char ch = exp[i];
        if(ch == '(' || ch == '[' || ch == '{') {
            s.push(ch);
        }
        else if(ch == ')' || ch == ']' || ch == '}') {
            if((ch == ')' && s.top() == '(') || (ch == '}' && s.top() == '{') || (ch == ']' && s.top() =='[')) {
                s.pop();
            }
            else{
                return false;
            }
        }
    }

    return (s.empty())?true:false;
}

int main() {
    string exp;
    getline(cin,exp);

    if(isBalanced(exp)) {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}