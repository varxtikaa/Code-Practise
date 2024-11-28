#include<stdio.h>
struct dim
{
    int l;
    int b;
}a1={10,10},a2;
struct address
{
    int area1;
    int area2;
}ta;
// struct address area(struct dim x,struct dim y)
// {
//     // printf("%d",x.l*x.b);
//     // printf("\n%d",y.l*y.b);
//     struct address ta;
//     ta.area1=x.l*x.b;
//     ta.area2=y.l*y.b;
//     return ta;
// }
struct address area(struct dim *x,struct dim *y)
{
    struct address ta;
    ta.area1=x->l*x->b;
    ta.area2=y->l*y->b;
    return ta;
}
int main()
{
    a2.l=20;
    a2.b=30;
    // printf("%d",a2.l*a2.b);
    // area(a1,a2);
    // struct address rar=area(a1,a2);
    struct address rar=area(&a1,&a2);
    printf("%d",rar.area1);
}