#include <iostream>

int main()
{
    std::string sentence ("Aufklärung ist der Ausgang des Menschen aus seiner selbstverschuldeten Unmündigkeit");

    //An welcher Position steht "Ausgang"?
    int posAusgang = sentence.find("Ausgang");
    std::cout<<posAusgang<<std::endl;

    //Enthält der Satz das Wort "Schuld"?
    bool schuld = sentence.find("Schule")!=std::string::npos;
}