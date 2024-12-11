#include <iostream>
#include <vector>
#include <map>

int main()
{
    std::vector<int> primes({2, 3, 5, 7, 11}); //Vektor mit Primzahlen
    std::map <int, std::vector<int>> factorizes; //Map mit (Zahl, Vektor mit Teilern)

    int N;
    std::cout<<"Enter N: "<<std::endl;
    std::cin>>N;

    for (int n = 2; n < N; n++)
    {
        for (auto p : primes)
        {
            if (n % p == 0)
            {
                factorizes[p].push_back(n);
            }
        }
    }
    std::cout << " p is factor of ..." << std::endl;
    for (auto p : factorizes)
    {
        std::cout << p.first << ":";
        for (auto n : p.second)
            std::cout<<" "<<n;
            std::cout<<std::endl;
    }
}