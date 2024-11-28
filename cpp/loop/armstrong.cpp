#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,sum=0,digit=0,temp=0,number=0;
    cout<<"Enter the number: ";
    cin>>n;
    temp=n;
    while(temp!=0){
        number+=1;
        temp/=10;
    }
    // cout<<number<<endl;
    temp=n;
    while(temp!=0){
        digit=temp%10;
        sum+=pow(digit,3);
        temp/=10;
    }
    if(n==sum)
    cout<<"Armstrong";
    else
    cout<<"Not armstrong.";
}