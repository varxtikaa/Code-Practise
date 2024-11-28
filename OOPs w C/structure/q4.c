#include<stdio.h>
struct students
{
    int roll_no;
    char name[50];
    int marks[7];
}s1;
int main()
{
    struct students s1[4];
    int m[4],sum=0;
    for(int i=0;i<4;i++)
    {
        sum=0;
        printf("Enter details for %d student:\n",i);
        scanf("%d",&s1[i].roll_no);
        fgets(s1[i].name,50,stdin);
        printf("\nEnter marks for 7 subjects:\n");
        for(int j=0;j<7;j++)
        {
            scanf("%d",&s1[i].marks[j]);
            sum+=s1[i].marks[j];
        }
        m[i]=sum;
    }
    int max=m[0];
    int index=0;
    for(int i=0;i<4;i++)
    {
        printf("%d",m[i]);
        if(m[i]>max)
        {
            max=m[i];
            index=i;
        }
    }
    printf("The topper is student %d.",index);
}