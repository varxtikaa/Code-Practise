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
    for(int i=0;i<row;i++){
        if(i%2==0){
            for(int j=0;j<col;j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j=n;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}