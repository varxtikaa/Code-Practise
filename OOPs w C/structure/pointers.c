#include<stdio.h>
struct emp
{
    int a;
    int b;
};
void mul(int *x,int *y)
{
    printf("%d",*x * *y);
}
int main()
{
    struct emp e1,e2;
//     printf("%d\n",&e1);
//     printf("%d\n",&e1.a);
//     printf("%d\n",&e1.b);
//     printf("%d\n",&e2);
//     printf("%d\n",&e2.a);
//     printf("%d\n",&e2.b);

    // struct emp *sp=&e1;
    // printf("Roll number: ");
    // scanf("%d",&sp->a);
    // printf("%d",sp->a);


}