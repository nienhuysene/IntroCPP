#include "celBo.h"
#include "math.h"
std::vector<double> CelBo::forceOn(const CelBo &Other) const
{
    std::vector<double> dist;
    for (int i = 0; i < 3; i++)
        dist.push_back(m_pos[i] - Other.m_pos[i]);
    double r(0);
    for (auto d : dist)
        r += d * d;
    r = sqrt(r);

    for (auto &d : dist)
        d /= std::pow(r, 3) * m_mass * Other.m_mass * 6.673e-11;
    return dist;
}