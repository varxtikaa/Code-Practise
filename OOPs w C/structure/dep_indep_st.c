#include<stdio.h>
struct dep
{
    int depid;
    struct emp
    {
        int empid;
    }e1,e2,e3,e4;

}d1,d2;
int main()
{
    struct dep d1,d2;
    d1.depid=111;
    d2.depid=222;
    d1.e1.empid=101;
    d1.e2.empid=102;
    d2.e3.empid=103;
    d2.e4.empid=104;   
}