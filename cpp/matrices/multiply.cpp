#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2,m,n;
    cout<<"Enter rows and columns for matrix 1: "<<endl;
    cin>>r1>>c1;
    int m1[r1][c1];
    for(int i=0;i<r1*c1;i++){
        m=i/c1;
        n=i%c1;
        cout<<"arr["<<m<<"]["<<n<<"]= ";
        cin>>m1[m][n];
    }
    cout<<"Enter rows and columns for matrix 2: "<<endl;
    cin>>r2>>c2;
    int m2[r2][c2],m3[r1][c2];
    for(int i=0;i<r2*c2;i++){
        m=i/c2;
        n=i%c2;
        cout<<"m2["<<m<<"]["<<n<<"]= ";
        cin>>m2[m][n];
    }
    if(c1==r2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                m3[i][j]+=m1[i][j]*m2[j][i];
            }
        }
        for(int i=0;i<r1*c2;i++){
            m=i/c2;
            n=i%c2;
            cout<<"m["<<m<<"]["<<n<<"]= "<<m3[m][n]<<endl;
        }
    }
    else{
        cout<<"Multiplication not possible.";
    }
}