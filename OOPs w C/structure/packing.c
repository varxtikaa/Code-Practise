#include<stdio.h>
///#pragma pack(1)
struct data
{
    char a;
    // char b;
    int c;
    double d;
    char e;
    int f;
}d1;
int main()
{
    struct data d1;
    printf("%d\n",&d1.a);
    // printf("%d\n",&d1.b);
    printf("%d\n",&d1.c);
    printf("%d\n",&d1.d);
    printf("%d\n",&d1.e);
    printf("%d\n",&d1.f);
    printf("%d\n",sizeof(struct data));
}
//removes padding