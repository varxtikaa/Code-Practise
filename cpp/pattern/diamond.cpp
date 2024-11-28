#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int s1=n-i-1;s1>0;s1--)
        {
            cout << " ";
        }
        for(int j=0;j<=i;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=n-1;i>0;i--)
    {
        for(int s1=n-i;s1>0;s1--)
        {
            cout << " ";
        }
        for(int j=0;j<i;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}