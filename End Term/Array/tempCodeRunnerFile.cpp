// #include<bits/stdc++.h>
// using namespace std;

// int fib(int n) {
//     if(n<=1) {
//         return n;
//     }

//     return fib(n-1) + fib(n-2);
// }

// int main() {
//     int n;
//     cin>>n;
//     cout<<fib(n);
// }

#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
    if(n<=1) {
        return n;
    }

    int a=0 , b = 1 , c;
    for(int i=2 ; i<=n ; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    int n;
    cin>>n;
    cout<<"Nth term is: "<<fib(n);
}