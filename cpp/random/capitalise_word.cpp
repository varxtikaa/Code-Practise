//capitalize the first letter of each word
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the senetence"<<endl;
    getline(cin,s);
    int len=s.size();
    for(int i=0;i<len;i++)
    {
        if(i==0 || (i>0 && (s[i-1]==' ' && (s[i]>=97 && s[i]<=122))))
        {
            s[i]-=32;
        }  
    }
    cout<<s;
    return 0;
}