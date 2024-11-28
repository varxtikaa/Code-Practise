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
    // cout<<"The matrix is: "<<endl;
    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int top=0,bottom=row-1,left=0,right=col-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }top++;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }right--;
        if(left<right)
        {
        for(int i=right;i>=left;i--){
            cout<<arr[bottom][i]<<" ";
        }bottom--;
        }
        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left]<<" ";
        }left++;
    }
}