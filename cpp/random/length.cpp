#include<iostream>
using namespace std;
int main()
{
    int roll_no;
    string name;
    cout<<"Enter the roll number: "<<endl;
    cin>>roll_no;
    cout<<"Enter the name: "<<endl;
    getchar(); // gets newline character
    getline(cin,name); //for input
    string length(name.size(),'*'); //length in * form
    cout<<length<<endl;
    cout<<name<<endl;
    cout<<roll_no<<endl;
    return 0;
}