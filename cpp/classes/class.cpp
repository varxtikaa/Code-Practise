/* 
Members of class:
1. Data Member (variable)
2. Member functions (methods)

all data members are private by default (inaccessible)
to be accessible, they should be public

Types of access specifiers:
1. Public: can be acccessed.
2. Private: cannot be accessed from outside but can be accessed inside.
2. Protected

OOPs has four pillars:
1. Encapsulation: 
- It is hiding data memebers and showing only the information that is necessary to the outisde world
- Data members and methods should work together.
- Encapsulation is established with the help of access specifiers.

2. Inheritance
3. Polymorphism
4. Abstraction
*/

#include<iostream>
using namespace std;
class student{
    // public:  //making the data members public //public is called as "Access Specifiers"
    int roll_no;
    string name;
    int age;
    public:
    //when memebers are private , we can use set and get fucntions to access the elements outside the class
    void set(int roll,string nm,int agee){
        roll_no=roll;
        name=nm;
        age=agee;
    }
    void get(){
        cout<<roll_no<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
    }

    //When defining members outside class, you have to add a func prototype inside class
    // void set(int roll,string nm,int agee);
    // void get();
};
//DEFINING MEMBERS OUTSIDE CLASS:
// void student::get(){
//     cout<<roll_no<<endl;
//     cout<<name<<endl;
//     cout<<age<<endl;
// }
// void student::set(int roll,string nm,int agee){
//     roll_no=roll;
//     name=nm;
//     age=agee;
// }

int main(){
    student s1,s2;    //instance variables
    // s1.roll_no=123;
    // s1.age=18;
    // s1.name="Vartika";
    // cout<<s1.roll_no<<" "<<s1.name<<" "<<s1.age;
    s1.set(1,"John",33);
    s2.set(2,"Peter",23);
    s1.get();
    s2.get();
}