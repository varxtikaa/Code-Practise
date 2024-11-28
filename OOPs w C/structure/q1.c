#include<stdio.h>
#include<string.h>
int main()
{
    struct Book
    {
        char b_title[50];
        char b_author[50];
        int b_price;
    }b1,b2;
    // strcpy(b1.b_title,"Hp");
    // strcpy(b1.b_author,"JK rowling");
    // b1.b_price=150;
    // strcpy(b2.b_title,"red white and royal blue");
    // strcpy(b2.b_author,"xyz");
    // b2.b_price=250;

    fgets(b1.b_title,50,stdin);
    fgets(b1.b_author,50,stdin);
    scanf("%d",&b1.b_price);
    printf("Deatils of Book1:\nName: %s\nAuthor: %s\nPrice: %d",b1.b_title,b1.b_author,b1.b_price);

    fgets(b2.b_title,50,stdin);
    fgets(b2.b_author,50,stdin);
    scanf("%d",&b2.b_price);
    printf("Deatils of Book2:\nName: %s\nAuthor: %s\nPrice: %d",b2.b_title,b2.b_author,b2.b_price);
    
}