//forces datatype to fit into specified number of bits
#include<stdio.h>
struct data
{
    char a:4;
    char b:4;
    char c:4;
    char d:4;
}d1;
int main()
{
    struct data d1;
    printf("%d",sizeof(struct data));
}

// here we are forcing each char to fit into 4 bits each. so they are occupying 16 bits i.e 2 bytes