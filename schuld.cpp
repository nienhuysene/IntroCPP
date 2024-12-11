#include <iostream>

int main()
{
    std::string sentence ("Aufklärung ist der Ausgang des Menschen aus seiner selbstverschuldeten Unmündigkeit");

    //An welcher Position steht "Ausgang"?
    int posAusgang = sentence.find("Ausgang");
    std::cout<<posAusgang<<std::endl;

    //Enthält der Satz das Wort "Schuld"?
    bool schuld = sentence.find("Schule")!=std::string::npos;
    if(schuld)
    {
        std::cout<<"ja, Schuld"<<std::endl;
    }
    else
    {
        std::cout<<"nein, keine Schuld. Aber warum?"<<std::endl;
    }

    //Schreibe alles ab "aus..."
    std::string Substring1 = sentence.substr(sentence.find("aus"));     //Findet Position von "aus" und Beginnt von dieser Position neuen Substring
    std::cout<<Substring1<<std::endl;

    //Schreibe alles vor "aus"
    std::string Substring2 = sentence.substr(0,sentence.find("aus"));
    std::cout<<Substring2<<std::endl;
}