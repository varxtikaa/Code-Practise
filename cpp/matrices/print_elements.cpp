#include<iostream>
using namespace std;
int main()
{
    int m,n,r,c;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    m=3;
    n=3;
    for(int i=0;i<m*n;i++){        //using one loop
        r=i/n;
        c=i%n;
        cout<<arr[r][c]<<" ";
    }
}