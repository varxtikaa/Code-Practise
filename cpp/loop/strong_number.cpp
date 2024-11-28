#include<iostream>
using namespace std;
int factorial(int n){
    // if(n==1)
    // return 1;
    // else
    // return n*factorial(n-1);
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int temp=n,digit=0,sum=0;
    while(temp!=0){
        digit=temp%10;
        sum+=factorial(digit);
        temp/=10;
    }
    if(sum==n)
    cout<<"Strong number";
    else 
    cout<<"Not a strong number";
    return 0;
}