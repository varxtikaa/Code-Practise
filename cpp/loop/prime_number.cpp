#include<iostream>
using namespace std;
int isprime(int n){
    int prime=0;
    if(n==1)
    return 0;
    else{
    for(int i=2;i<n;i++){
        if(n%i==0)
        prime+=1;
    }
    if(prime>0)
    return 0;
    else
    return 1;
    }
}
int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    if(isprime(x))
    cout<<"Is prime";
    else
    cout<<"Not prime";
    return 0;
}