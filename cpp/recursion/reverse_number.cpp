#include<iostream>
using namespace std;
int sum=0;
int reverse(int n){
    if(n==0){
        return sum;
    }
    int digit=n%10;
    sum=sum*10+digit;
    return reverse(n/10);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<reverse(n);
}