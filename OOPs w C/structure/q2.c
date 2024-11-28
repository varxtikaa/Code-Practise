#include<stdio.h>
struct emp
{
    int empid;
    char emp_name[50];
    struct location
    {
        int longitude;
        int lat;
    }l1,l2;
    struct address
    {
        int h_no;
        char city[50];
    }a1,a2;
}e1,e2;
int main()
{
    struct emp e1,e2;
    e1.empid=101;
    fegts(e1.emp_name,50,"abc");
    e1.l1.longitude=1;
    e1.l1.lat=2;
    e1.a1.h_no=123;
    fegts(e1.a1.city,50,"rajpura");

    e2.empid=102;
    fegts(e2.emp_name,50,"abc");
    e2.l2.longitude=3;
    e2.l2.lat=4;
    e2.a2.h_no=456;
    fegts(e2.a2.city,50,"patiala");

}