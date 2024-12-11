#include <iostream>
#include <cmath>

using namespace std;

void vertausche(int &a, int &b)
{
    int z = a;
    a = b;
    b = z;
}

void vertausche(double &a, double &b)
{
    double z = a;
    a = b;
    b = z;
}

void vertausche(string &a, string &b)
{
    string z = a;
    a = b;
    b = z;
}

int main()
{
    string a;
    cout<<"Enter a: "<<endl;
    cin>>a;

    string b;
    cout<<"Enter b: "<<endl;
    cin>>b;
    vertausche(a,b);
    cout<<"a="<<a<<" ,b="<<b<<endl;

}