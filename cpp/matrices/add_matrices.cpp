#include<iostream>
using namespace std;
int main(){
    int row,col,m,n,sum=0;
    cout<<"Enter rows and columns: ";
    cin>>row;
    cin>>col;
    int a1[row][col],a2[row][col];
    cout<<"Enter first matrix: "<<endl;
    for(int i=0;i<row*col;i++){
        m=i/col;
        n=i%col;
        cout<<"arr["<<m<<"]["<<n<<"]= ";
        cin>>a1[m][n];
    }   
    cout<<"Enter second matrix: "<<endl;
    for(int i=0;i<row*col;i++){
        m=i/col;
        n=i%col;
        cout<<"arr["<<m<<"]["<<n<<"]= ";
        cin>>a2[m][n];
    }   
    cout<<"Sum matrix: "<<endl;
    for(int i=0;i<row*col;i++){
        m=i/col;
        n=i%col;
        cout<<a1[m][n]+a2[m][n]<<" ";
    }   

}