#include<iostream>
using namespace std;
int fib(int n){
    int arr[n];
    if(n==0){
        cout<<0<<" ";
    }
    else if(n==1){
        cout<<1<<" ";
    }
    else{
        cout<<fib(n-1)+fib(n-2)<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    fib(n);
}