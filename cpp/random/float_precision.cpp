#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float a(2345.123456789);
    double b(2345.1234567890123456789);
    long double c(2345.12345678901234567890L);
    long double d(2345.0);
    cout<<setprecision(15);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}

