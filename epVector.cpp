#include <iostream>
#include <vector>
#include <string>

class EpVector
{
    std::vector <double> m_vec;

    public:

    EpVector(const std::vector <double> &V) : m_vec(V){}

    EpVector &add(const EpVector &Other)
    {
        for (int i = 0; i < m_vec.size(); i++)
        {
            m_vec[i] += Other.m_vec[i];
        }
        return *this;
    }

    EpVector sum(const EpVector &Other) const
    {
        auto res(*this);
        res.add(Other);
        return res;
    }

    void scale(const double Scalar)
    {
        for (int i = 0; i < m_vec.size(); i++)
        {
            m_vec[i] *= Scalar;
        }
    }       

    std::string str() const 
    {
        std::string res;
        for (int i = 0; i < m_vec.size(); i++)
        {
            res += std::to_string(m_vec[i]) + " ";
        }
        return res;
    }
};

int main()
{
    std::vector<double> u_vec = {1,2,3};
    std::vector<double> v_vec = {4,5,6};
    EpVector  u(u_vec), v(v_vec);

    v.add(u);
    std::cout<<v.str()<<std::endl; // v(neu)=v+u

    EpVector w = u.sum(v);
    std::cout<<w.str()<<std::endl; //w=u+v(neu)=2u+v

    v.scale(3);
    std::cout<<v.str()<<std::endl;//v(neu2)=v(neu)*3
}