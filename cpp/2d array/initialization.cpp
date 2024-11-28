#include<iostream>
using namespace std;
int main(){
    int arr[][3]={1,2,3,4,5,6}; //2 rows
    /*
    1 2 3
    4 5 6   
    has 2 rows and 3 columns , so arr represents first element of first row
    arr+1 represents first element of second row i.e 4
    */
    cout<<(int)(arr)<<endl; //(int) shows integer from address
    cout<<(int)(arr+1)<<endl;

    cout<<(int)**arr<<endl;  //DEREFERENCING
    //*arr shows the address and **arr shows the element stored at that address(*arr)
    cout<<(int)**(arr+1)<<endl;
    int *ptr[2]={nullptr,nullptr};
    ptr[0]=arr[0]; //stores address of row 1
    ptr[1]=arr[1]; //stores address of row 2
    cout<<*(*(ptr+0)+1)<<endl;

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }
}