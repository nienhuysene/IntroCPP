#include <iostream>
using namespace std;

int main()
{
    int nFac = 1;
    int n;
    cout<<"n: ";
    cin>>n;
    for(int k=1; k<=n;k++)
    {
        nFac*=k;
    }
    cout<<nFac<<endl;
}