#include<iostream>
using namespace std;
int main(){
    string s="hello";
    s.push_back('o'); //adds elemnt to end of string
    cout<<s<<endl;
    s.pop_back(); //removes last element
    cout<<s<<endl;
    cout<<"hello"+' '+s<<endl; //valid
    // cout<<"hello"+" there";          invalid
    string s2(5,'*'); //will store *****
    string s3(s2,4,6); //will pick up 6 elements from the 4th index of s2 and store it in s3
    // if out of range will pick nothing
    cout<<s3;
    s3.clear(); //clears string
    s2.replace(2,5,"replaces"); // will replace 5 characters from 2nd index in s2
    cout<<s.substr(2,3); //will display substring from particular range
    cout<<s.at(2); //will display element at the particular index
    s.find(s2); //will return -1 if s2 not present in s else it is present
    cout<<s.front()<<' '<<s.back()<<endl; //will return the values at the start and the end of the string

    string str="hehehe";
    string::reverse_iterator in; //or could write using namespace string otuside main func
    for (in=str.rbegin();in<str.rend();in++)  //rbegin and rend when printing in reverse
    {
        /* code */
        cout<<*in;
    }
    cout<<endl;
    //to print straight string
    string::const_iterator st;
    for(st=str.cbegin();st<str.cend();st++){
        cout<<*st;
    }

}