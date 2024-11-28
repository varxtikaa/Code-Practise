#include<iostream>
using namespace std;
int sum=0;
int print(int n,int N){
    if(n==N)
    return n;
    sum+=print(n+1,N);
    return n;
}
int main(){
    int N=5;
    print(0,N);
    cout<<sum;
}