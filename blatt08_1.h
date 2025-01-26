#ifndef MATRIXDOUBLE_H
#define MATRIXDOUBLE_H
#include <string>
#include <iostream>
#include <vector>

class MatrixDouble
{
    // Werte der Coeffizienten als std::vector der Spaltenwerte
    std::vector<std::vector<double>> m_mat;

    public:
    MatrixDouble() {} // Wann kommt das zur Ausfuehrung? (Code-Beispiel) Wenn der Konstruktor aufgerufen wird

    // Was ist die Funktion von & in der Zeile unten? Pass-by-reference: 
    MatrixDouble(const std::vector<std::vector<double>> &Mat) : m_mat(Mat) {}
    
    // Konstante Matrix der Dimension Rows x Cols
    MatrixDouble(int Rows, int Cols, double Val) //Erstellt Matrix
    {
        for (int j = 0; j < Cols; j++)
        {
            m_mat.push_back(std::vector<double>()); // Was geschieht hier?
            for (int i = 0; i < Rows; i++)
            {
                m_mat[j].push_back(Val); // Warum kann man an m_mat[j] einen rellen Wert anhaengen?}  
            }   
        }
    }
    // Anzahl der Spalten
    // Was bedeutet const unten? Also was bleibt unveraendert? (Geben Sie ein Beispiel)
    int numberOfCols() const
    {
        return m_mat.size();
    }

    // (1) implementieren Sie numberOfRows in CCP-file blatt08_1.cpp
    //     (Beachten Sie, dass m_mat auch leer sein kann!)
    int numberOfRows() const
    {
        if (m_mat.size() == 0)
        return 0;
        return m_mat[0].size();
    }

    // matrix-multiplication matrixC = matrixA * matrixB
    // Wo ist die Implementierung?
    MatrixDouble operator*(const MatrixDouble &Mat) const
    {
        MatrixDouble res(numberOfRows(), Mat.numberOfCols(), 0);
        for (int j = 0; j < Mat.numberOfCols(); j++)
        {
            for (int i = 0; i < numberOfRows(); i++)
            {

                for (int k = 0; k < numberOfCols(); k++)
                {
                 res.m_mat[j][i] += (*this)(i,k) * Mat(k,j);
                }
            }
        }
        return res;
    }

    // Wie wird operator()(...) benuetzt? (Beispielcode)
    // Siehe auch Slides 121 ff
    double operator()(int I, int J) const {return m_mat[J][I];}
    
};
#endif