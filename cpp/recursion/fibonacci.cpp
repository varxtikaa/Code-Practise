//to find nth term of fib series
#include<iostream>
using namespace std;
int fib(int x){
    if(x==1 || x==2){
        return 1;
    }
    // else if(x==2){
    //     return 2;
    // }
    else{
        return fib(x-1)+fib(x-2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}