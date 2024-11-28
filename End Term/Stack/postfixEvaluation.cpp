#include<bits/stdc++.h>
using namespace std;
stack<int> s;

void postfixEvaluation(string exp) {
    int len = exp.size();

    for(int i=0 ; i<len ; i++) {
        char ch = exp[i];
        if(isdigit(ch) || isalpha(ch)) {
            s.push(ch-'0');
        }
        else if(ch == '+' || ch == '-' || ch == '/' || ch == '*') {
            int e1,e2;
            if(!s.empty()) {
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
                case '/':
                s.push(e1/e2);
                break;
                case '*':
                s.push(e1*e2);
                break;
            }

        }
            else{
            continue;
            }

    }
}

int main() {
    string exp;
    getline(cin,exp);
    postfixEvaluation(exp);
    cout<<s.top();
    
}