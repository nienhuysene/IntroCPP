#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> a; // Definition of vector a
    a.push_back(10);
    a.push_back(9);
    a.push_back(8);
    a.push_back(7);
    a.push_back(6);
    a.push_back(5);
    a.push_back(4);

    vector<double> b; // Definition of vector b
    b.push_back(1.1);
    b.push_back(1.2);
    b.push_back(5.7);
    b.push_back(0.12);
    b.push_back(0.00001);

    // Adding components to b until dim(a) = dim(b)

    for (int k = b.size(); k < a.size(); k++)
    {
        b.push_back(0);
    }

    cout << "Vector a:" << endl;
    for (int i = 0; i < a.size();i++)
    {
        cout << a[i] << endl;
    }

    cout<<" "<<endl;

    cout << "Vector b:" << endl;
    for (int i = 0; i < b.size();i++)
    {
        cout << b[i] << endl;
    }

    cout << "Initial size of vector a = " << a.size() << endl;
    cout << "Initial size of vector b = " << b.size() << endl;

    int alpha; // Eingabe des Faktors alpha
    cout << "Enter alpha: " << endl
         << endl;
    cin >> alpha;
    cout << "alpha = " << alpha << endl;

    // Addieren der beiden Vektoren a und alphaB zum Vektor c
    // Definition des Vektors c
    vector<double> c;

    cout << "Vector c: " << endl;
    for (int i = 0; i < a.size(); i++)
    {
        c.push_back(a[i] + alpha * b[i]);
        cout << c[i] << endl;
    }
}