#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int col=20;
    cout<<setw(20);
    cout<<"Fname"<<setw(col)<<"Lname"<<setw(20)<<"Age"<<endl;
    cout<<"Vartika"<<setw(col)<<"Yadav"<<setw(20)<<"18"<<endl;
    cout<<"Vanshika"<<setw(col)<<"Garg (VG)"<<setw(20)<<"17"<<endl;
    cout<<"Vaishnavi"<<setw(col)<<"Singh"<<setw(20)<<"18"<<endl;

}