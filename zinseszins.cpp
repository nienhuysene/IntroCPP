#include <iostream>
#include <cmath>

using namespace std;

float Kapital = 10000;
int Rate = 800;
float Zins = 0.07;
int Jahre;
float Gesamt;

int main()
{
    for (Jahre = 0; Jahre < 10; Jahre++)
    {
        float Zinsen = (Kapital + 12 * Rate) * Zins;
        float Gesamt = Kapital + Zinsen;
        cout << "Zinsen: " << Zinsen << endl;
        // cout << "Gesamt: "<< Gesamt <<endl;
        Kapital = Gesamt;
    }
}