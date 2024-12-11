#include <iostream>
using namespace std;
int main()
{
    int Alter;
    cout<<"Alter: ";
    cin>>Alter;

    if(Alter<18)
    {
        cout<<"Minderjährig";
    }
    else
    {
        cout<<"Volljährig";
    }
}