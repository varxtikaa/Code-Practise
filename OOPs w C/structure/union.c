/*
In Union, unlike structure, each variable is not assigned a different 
physical memory location. Instead for one union, only one block of 
physical memory is assigned whose size is size of largest data-type 
in structure.
*/
union Student 
{
    int roll_no;
    float grade;
    char *name;
};
//here largest datatype is 