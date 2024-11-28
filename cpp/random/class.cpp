#include<iostream>
using namespace std;
class student
{
    public: //can be accessed
    int rollno;
    string name;
    //private: //cannot be accessed
    string phoneno;

    void display(){
        cout<<rollno<<" "<<name<<" "<<phoneno;
    }
};
int main()
{
    student s1;
    s1.rollno=12;
    s1.name="vartika";
    s1.phoneno="7007569772";
    s1.display();
    return 0;
}

