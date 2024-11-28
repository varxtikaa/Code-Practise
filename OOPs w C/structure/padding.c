#include<stdio.h>
struct data
{
    char a;
    // char b;
    int c;
    double d;
    char e;
}d1;
int main()
{
    struct data d1;
    printf("%d\n",&d1.a);
    // printf("%d\n",&d1.b);
    printf("%d\n",&d1.c);
    printf("%d\n",&d1.d);
    printf("%d\n",&d1.e);
    printf("%d\n",sizeof(struct data));
}
// 6422296 stores char a 6422297 stores char b and 6422300 stores int c
// int is only stored in addresses divisible by 4, double divisible by 8, char by 1 etc
// here 6422298 6422299 are padding (padding by 3 units)
//sizeof() returns padding 

// the biggest data type will add its bits after the last data type, for example-->
// 80 84 88 96 , so 4 4 8 becomes 16 so after char e occupies 1 byte it will add 7 padding (largest datatype double)
// so 16+8 is 24

