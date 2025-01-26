#ifndef CELBO_H
#define CELBO_H
#include <vector>

class CelBo
{
    double m_mass;
    std::vector<double> m_pos;

    public:
    CelBo(double Mass, std::vector<double> Pos) : m_mass(Mass), m_pos(Pos){};

    double mass() const
    {
        return m_mass;
    }

    std::vector<double> position3d() const
    {
        return m_pos;
    }
    
    std::vector<double> forceOn(const CelBo & Other) const;

};

#endif