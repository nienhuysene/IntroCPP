#include <iostream>
#include <string>
#include <fstream>

int main()
{
    //öffne ein file "blatt09.inp" als input
    ...finp("blatt09.inp");

    //teste, ob das öffnen gelungen ist
    if(not finp ...)
        std::cout<<"Failed to open blatt09.inp"<<std::endl;
        std::vector <std::string> lines;
    
    do
    {
        std::string line;
        std::getline(...,...);
        lines...;
    }...(not finp.eof());
    //lesen von oef-line ist leer, aus lines entfernen
    ...
    //Schließen Sie das Input-file
    ...
    //Öffnen Sie das Output-file
    std::ofstream....
    for(int k = ...;k>=0;k--)
    {
        ...
        std::cout<<lines[k]<<std::endl;
    }
}

