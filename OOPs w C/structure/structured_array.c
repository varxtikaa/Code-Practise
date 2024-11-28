#include<stdio.h>
struct student
{
    int roll_no;
    char name[50];
}s;
int main()
{
    struct student s[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter roll number and name of student %d:\n",i+1);
        scanf("%d",&s[i].roll_no);
        fgets(s[i].name,50,stdin);
    }
}