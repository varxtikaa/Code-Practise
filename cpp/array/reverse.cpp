#include<iostream>
using namespace std;
void printarray(string *s){
    // cout<<s[0][2]<<endl;
    // cout<<(*s)[0];
    int len=s->length();
    cout<<" "<<len;
    int start=0;
    int end=0;
    int temp=0;
    while(end<len){
        if(s[0][end]==' ' || s[0][end]==len/*(*s)[end]*/){
            temp=end-1;
            for(start;start<temp;start++){
                swap(s[0][start],s[0][temp]);
                temp--;
            }
            start=end+1;
        }
        end++;
    }

}
int main(){
    string name="how are you";
    int len=name.length();
    // cout<<name[0];
    // printarray(&name);
    // cout<<name;
}