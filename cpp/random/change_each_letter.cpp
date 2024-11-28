// change every letter in a string with the letter following it


#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string: "<<endl;

    getline(cin,s);
    int length=s.size();
    for(int i=0;i<length;i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            if(s[i]==122)
            s[i]=97;
            else
            s[i]+=1;
        }
        else if(s[i]>=65 && s[i]<=90)
        {
            if(s[i]==90)
            s[i]=65;
            else
            s[i]+=1;
        }
    }
    cout<<s;
}