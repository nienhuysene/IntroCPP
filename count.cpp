#include <iostream>
#include <chrono>

int main()
{
    auto start = std::chrono::high_resolution_clock::now();
    double i = 0;
    while(i < 1000000)
    {
        std::cout<<i<<std::endl;
        i++;
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;
    std::cout << "Execution time: " << duration.count() << " seconds" << std::endl;
}