#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
    char type;
    float A, B;
    cout << "Datentyp (I/F/D/L): "; // I = int, F = float, D=double, L= long
    cin >> type;

    cout << "A: ";
    cin >> A;
    cout << "B: ";
    cin >> B;

    if (type == 'I')
    {
        int a = A;
        int b = B;

        cout << "a: " << a << ", b: " << b << endl;
        cout << "a+b: " << a + b << endl;
        cout << "a-b: " << a - b << endl;
        cout << "a*b: " << a * b << endl;
        cout << "a/b: " << a / b << endl;
    }

    if (type == 'F')
    {
        float a = A;
        float b = B;

        cout << "a: " << a << ", b: " << b << endl;
        cout << "a+b: " << a + b << endl;
        cout << "a-b: " << a - b << endl;
        cout << "a*b: " << a * b << endl;
        cout << "a/b: " << a / b << endl;
    }

    if (type == 'D')
    {
        double a = A;
        double b = B;

        cout << "a: " << a << ", b: " << b << endl;
        cout << "a+b: " << a + b << endl;
        cout << "a-b: " << a - b << endl;
        cout << "a*b: " << a * b << endl;
        cout << "a/b: " << a / b << endl;
    }
}