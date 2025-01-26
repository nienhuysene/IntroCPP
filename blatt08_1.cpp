#include "blatt08_1.h"
#include <iostream>

int main()
{
    // 3 x 2 Matrix (2 Spalten)
    MatrixDouble mA({{1, 2, 3}, {4, 5, 6}});
    MatrixDouble mB({{7.5, 8.5}, {6.5, 5.5}});
    MatrixDouble mC = mA * mB;
    for (int i = 0; i < mC.numberOfRows(); i++)
    {
        for (int j = 0; j < mC.numberOfCols(); j++)
        {
            std::cout << " " << mC(i, j);
        }
        std::cout << std::endl;
    }
}
