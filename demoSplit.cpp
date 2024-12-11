#include <iostream>
#include <epString.h>
#include <vector>
#include <string>

int main()
{
    std::string InputString ("a,b,c,d");
    std::vector <std::string> parts = ep::splitString(InputString);
    
}