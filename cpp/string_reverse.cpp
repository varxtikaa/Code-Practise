#include<iostream>
#include<string>
using namespace std;
void Reverse(string *s){
    string temp="";
    for (int i = s->size()-1; i >= 0; i--)
    {
        /* code */
        temp += s[i];
    }
    *s=temp;

}
void Display(string s){
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}
int main(){
    string s;
    cout<<"Enter string: "<<endl;
    cin>>s;
    Reverse(&s);
    cout<<"Reversed string is: "<<endl;
    // Display(s);
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    return 0;
}