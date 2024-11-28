#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    struct students
    {
        int roll_no;
        float marks;
        char name[20];
    }s1;
    
    // gets(s1.name;"Vartika");  

    strcpy(s1.name,"Vartika");
    typedef struct companyprofile //typedef used for abbreviating structure name
    {
        int c_id;
    }cp;
    cp c1;  
}
