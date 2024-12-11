#include <iostream>     //Inkludiert den header "iostream"
#include <vector>       //Inkludiert den header "vector"
int main()              //main-funktion, die durchlaufen wird
{
    std::cout<< " compute binomial coefficients for n , enter n : ";                        //Gibt Text aus
    int nFinal;                                                                             //Deklariert maximales n
    std::cin >> nFinal;                                                                     //User gibt maximales n ein
    if(0 > nFinal or nFinal > 10)                                                           //nFinal muss Element von (0,10) sein
    {
        std::cout<< " need 0 < n and limited to n <=10 , got : "<<nFinal <<std::endl;       //Gibt Intervall als Bedingung aus
        exit(0);
    }
    std::vector<int> binomN(2, 1);                                          //Erzeugt Vektor "binomN" mit den Elementen 2 und 1
    for (int n = 1; n < nFinal; n++)                                        //For-funktion mit Start n=1 und Ende n=nFinal; n wird jedes mal um 1 erhöht
    {
        std::vector<int> next(1, 1);                                        //Erzeugt Vektor "next" mit Elementen 1 und 1
        for(size_t k = 1; k < binomN.size(); k++)                           //For-Fkt. mit Start bei Größe des Vektors = 1 bis Größe von Vektor "binomN"
        {
            next.push_back(binomN[k - 1] + binomN[k]);                      //Fügt dem Vektor "next" den Eintrag "binomN[k - 1] + binomN[k]"
        }                                                                      // hinzu, bis dim(next)=dim(binomN)
        next.push_back(1);                                                  //Fügt dem Vektor "next" eine Komponente mit dem Wert 1 hinzu
        binomN = next;                                                      //Der Vektor binomN wird zum Vektor next
    }
    std::cout<< " Binomial coefficients for n =" << nFinal <<std::endl;     //Gibt Überschrift aus
    for (auto n : binomN)                                                   //Geht den unteren Code für jedes n aus binomN durch
        std::cout << " " <<n;                                               //Gibt jede Komponente n aus
        std::cout << std::endl;                                             //Neue Zeile
}