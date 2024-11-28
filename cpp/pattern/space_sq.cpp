// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=n;j>i;j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     cout << endl;

//     for(int i=0;i<n;i++)
//     {
//         for(int space=n+i;space>0;space--)
//         {
//             cout << " ";
//         }
//         for(int j=n;j>i;j--)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int space=2*n-i-1;space>0;space--)
//         {
//             cout << " ";
//         }
//         for(int j=0;j<=i;j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>i;j--)
        {
            cout << "*";
        }
        for(int space=0;space<n+1;space++)
        {
            cout << " ";
        }
        for(int j=n;j>i;j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << "*";
        }
        for(int space=2*n-i-1;space>0;space--)
        {
            cout << " ";
        }
        for(int j=0;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
}

