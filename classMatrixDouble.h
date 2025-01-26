#ifndef MATRIXDOUBLE_H
#define MATRIXDOUBLE_H
#include <string>
#include <vector>

class MatrixDouble
{
    std::vector<std::vector<double>> m_mat;

    public:
    MatrixDouble(){}
    MatrixDouble(const std::vector<std::vector<double>> &Mat) : m_mat(Mat){}

    MatrixDouble(int Rows, int Cols, double Val)
    {
        for(int j=0;j<Cols;j++)
        {
            m_mat.push_back(std::vector<double>());
            for(int i=0;i<Rows;i++)
            {
                m_mat[j].push_back(Val);
            }
        }
    }

    int numberOfCols() const
    {
        return m_mat.size();
    }
    MatrixDouble.numberOfCols() const;
    MatrixDouble operator*(const MatrixDouble &Mat) const;
    MatrixDouble.operator()(int I, int J) const
    {
        return m_mat[J][I];
    }
}
#endif