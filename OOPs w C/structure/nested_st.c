#include<stdio.h>
int main()
{
    struct employee
    {
        int id;
        char name[50];
        struct address
        {
            char st_nm[50];
            char city[50];
            char state[50];
        }ad;
    }emp;
}
struct A   //nested st. using separate structures
{
    int a;
    float b;
};
struct B
{
    int c;
    float d;
    struct A e;
};
// struct A is dependent struct B is independent