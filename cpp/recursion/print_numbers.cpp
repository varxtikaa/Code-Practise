#include<iostream>
using namespace std;
// int print_numbers(int i,int n){
//     if(i==n) //base condition
//     return n;
//     else
//     {
//         cout<<i<<endl;
//         return print_numbers(++i,n);
//     }
// }
void print_no(int i,int n){
    if(i>n)
    exit;
    else{
        cout<<i<<endl;
        return print_no(++i,n);
    }
}
int main(){
    int i=1,n=5;
    // int c=print_numbers(i,n);
    // cout<<c;
    print_no(i,n);
}