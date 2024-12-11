#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 100; i++)
    {
        float e = i^2;
        cout<<e<<endl;
        i=i+1;
    }
}