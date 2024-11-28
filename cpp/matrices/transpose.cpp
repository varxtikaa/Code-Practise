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
        for(int j=i;j<col;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(int i=0;i<row*col;i++){
        m=i/col;
        n=i%col;
        cout<<"arr["<<m<<"]["<<n<<"]= "<<arr[m][n]<<endl;
    }
}