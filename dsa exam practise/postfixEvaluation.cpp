#include<bits/stdc++.h>
using namespace std;
stack<int> s;

void postfixEvaluation(string exp) {

    int len = exp.length();

    for(int i=0 ; i<len ; i++) {
        char ch = exp[i];
        if(isdigit(ch)) {
            s.push(ch-'0');
        }
        else if(ch=='+' || ch=='-' || ch=='/' || ch=='*') {
            int e1,e2;
            if(!s.empty()){
                e2 = s.top();
                s.pop();
                e1 = s.top();
                s.pop();
            }
            switch(ch) {
                case '+':
                s.push(e1+e2);
                break;
                case '-':
                s.push(e1-e2);
                break;
                case '*':
                s.push(e1*e2);
                break;
                case '/':
                s.push(e1/e2);
            }
        }
        else{
            continue;
        }
    }
}

int main() {
    string strs;
    getline(cin,strs);
    postfixEvaluation(strs);
    cout<<s.top();
}