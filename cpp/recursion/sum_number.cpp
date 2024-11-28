#include<iostream>
using namespace std;
int sum=0;
int sum_number(int n){
    if(n==0){
        return sum;
    }
    int digit=n%10;
    sum+=digit;
    return sum_number(n/10);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<sum_number(n);
}