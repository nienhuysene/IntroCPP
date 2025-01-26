#include <iostream>
#include <vector>
#include "math.h"

class CelBo
{
    double m_mass;
    std::vector<double> m_pos;

    public:

    CelBo(double Mass, std::vector<double> Pos) : m_mass(Mass), m_pos(Pos) {}; /*Creates a class representing a celestial body with Mass and Pos (as a vector for multiple dimensions);
    Initializes member variables m_mass and m_position with values of Mass and Pos*/

    double mass() const // mass() returns value of a cel. body, i.e. m_mass
    {
        return m_mass;
    }

    std::vector<double> position3d() const // same with position
    {
        return m_pos;
    }

    std::vector<double> forceOn(const CelBo &Other) const   //OtherObject.forceOn(Object)
    {
        std::vector<double> dist;
        for (int i = 0; i < 3; i++)
            dist.push_back(m_pos[i] - Other.m_pos[i]);  //calculates difference of every vector component and adds the distance to dist vector

        double r(0);    //double r = 0;
        for (auto d : dist) //loops through every component of distance vector
            r += d * d;
        r = sqrt(r);    //r=sqrt(d1^2+d2^2+d3^2), r equals total distance of two celestial bodies

        for (auto &d : dist)    //pass-by-reference: same d as above, so no copy of d
            d /= std::pow(r, 3) * m_mass * Other.m_mass * 6.673e-11;
        return dist;
    }
};

int main()
{
    CelBo sun(1.98892e30, {0., 0., 0.});
    CelBo earth(5.9722e24, {0, 0, 1.495978707e11});
    CelBo moon(7.346e22, {3.84399e8, 0, 1.495978707e11});

    std::vector<CelBo> bos = {sun, earth, moon};
    for (int k = 0; k < 3; k++)
    {
        auto f = bos[k].forceOn(bos[(k + 1) % 3]);  //k=0: sun/earth ; k=1: earth/moon ; k=2: moon/sun
        std::cout << k << " on " << (k + 1) % 3 << ": ";
        for (auto ff : f)
            std::cout << " " << ff; //prints all force vector components
        std::cout << std::endl;
    }
}