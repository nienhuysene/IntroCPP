#include <iostream>

class Car
{
    public:

    float speed;

    void changeSpeed(int newSpeed)
    {
        speed = newSpeed;
    };

};

int main()
{
    Car Auto1;
    Auto1.speed = 80;
    std::cout<<"Speed="<<Auto1.speed<<std::endl;
    std::cout<<"Enter new speed"<<std::endl;
     
    int newSpeed;
    std::cin>>newSpeed;
    Auto1.changeSpeed(newSpeed);
    std::cout<<"Speed= "<<Auto1.speed<<std::endl;
}