#include <iostream>
#include <vector>
#include <cmath>

int main()
{
    double Epsilon; //Epsilon als infinitesimaler Schritt
    std::cout<<"Epsilon: "<<std::endl;
    std::cin>>Epsilon;

    double UntereIntegrationsgrenze;
    std::cout<<"Untere Integrationsgrenze: "<<std::endl;
    std::cin>>UntereIntegrationsgrenze;

    double ObereIntegrationsgrenze;
    std::cout<<"Obere Integrationsgrenze: "<<std::endl;
    std::cin>>ObereIntegrationsgrenze;

    std::vector <double> Rechtecke; //Vektor mit Flächeninhalten der Rechtecke unter dem Graphen

    for(double x = UntereIntegrationsgrenze;x<=ObereIntegrationsgrenze;x+=Epsilon)
    {
        double f = -pow(x,2)+10;     //Zu integrierende Funktion f
        if(f<0)
        {
            Rechtecke.push_back(Epsilon*f*(-1));
        }
        else
        {
            Rechtecke.push_back(Epsilon*f);
        }
    }

    double Gesamt;
    for(int i = 0; i <= Rechtecke.size(); i++)
    {
        Gesamt += Rechtecke[i];
    }
    std::cout<<Gesamt<<std::endl;
}