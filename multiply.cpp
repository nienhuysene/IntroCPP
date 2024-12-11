#include <iostream>
#include <climits>

using namespace std;

int main()
{
    float a, b, prod;
    cout << "enter a: ";
    cin >> a;

    cout << "enter b: ";
    cin >> b;

    prod=a*b;
    if(prod < INT64_MAX && prod > INT64_MIN)
    {
      cout << a << " * " << b <<" = " <<prod <<endl;  
    }
   
    {
        cout <<" Wert außerhalb des Bereichs int ";
    }
}