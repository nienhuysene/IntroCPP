#include <iostream>
int main() 
{
EpComplex c1 (1, 2);
EpComplex c2 (3, 4);
auto c3 = c1.sum(c2);
auto c4 = c1.multiply(c2);
std::cout <<"result: sum= "<<c3.str()<<  " prod= " <<c4.str()<< std::endl;
c3 = c1 + c2 ;
c4 = c1 * c2 ;
std::cout <<"alternative truth: sum= "<<c3.str()<< " prod= "<<c4.str()<<std::endl;
}