#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=n;i>0;i--)
    {
        for(int space = n-i;space>0;space--){
            cout <<" ";
        }
        for(int j = 0;j<i;j++){
            cout << "* ";
        }
        cout << endl;
    }
}