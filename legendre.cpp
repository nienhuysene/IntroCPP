#include <iostream>
#include <vector>

using namespace std;

int main()
{
    double x = 0.5;
    int N = 5;

    double pnPlus1;
    double pn = x;
    double pnMinus1 = 1;

    for(int n = 1; n<=N; n++)
    {
        pnPlus1=((2*(n+1)*x*pn)/(n+1))-((n*pnMinus1)/(n+1));
        std::cout<<pnPlus1<<endl;
        pnMinus1 = pn;
        pn = pnPlus1;
    }
}