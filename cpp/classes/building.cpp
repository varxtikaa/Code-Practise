#include<iostream>
using namespace std;
class Building{
    int b_no;
    int f_no;
    int r_no;
    string status;
    public:
    void set(int b,int f,int r,string st);
    void get();
    string checkstatus();
};
void Building::set(int b,int f,int r,string st){
    b_no=b;
    f_no=f;
    r_no=r;
    status=st;
    }
void Building::get(){
    cout<<b_no<<endl;
    cout<<f_no<<endl;
    cout<<r_no<<endl;
}
string Building::checkstatus(){
    return status;
}