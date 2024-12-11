#include <iostream>
#include "myPhysics.h"
#include <cmath>

int main()
{
    std::cout<<"h_planck = "<<phys::h_planck<<std::endl;
    std::cout<<"mass_electron = "<<phys::mass_electron<<std::endl;
    std::cout<<"charge_proton = "<<phys::charge_proton<<std::endl;
    std::cout<<"bohr_radius = "<<phys::bohr_radius<<std::endl;
    std::cout<<"ep0 = "<<phys::ep0<<std::endl;

    double E_0 = (-0.5*phys::mass_electron*pow(phys::charge_proton,4))/(8*pow(phys::h_planck,2)*pow(phys::ep0,2));

    std::cout<<"E_0 = "<<E_0<<std::endl;
}