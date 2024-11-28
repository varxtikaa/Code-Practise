#include<iostream>
using namespace std;
int main(){
    int row,col,m,n,sum=0;
    cout<<"Enter rows and columns: ";
    cin>>row;
    cin>>col;
    int arr[row][col];
    for(int i=0;i<row*col;i++){
        m=i/col;
        n=i%col;
        cout<<"arr["<<m<<"]["<<n<<"]= ";
        cin>>arr[m][n];
    }
    for(int i=0;i<row*col;i++){
        m=i/col;
        n=i%col;
        if(m==0 || m==row-1 || n==0 || n==col-1){
            sum+=arr[m][n];
        }
    }
    cout<<"Sum= "<<sum;
}