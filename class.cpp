#include <iostream>
#include <ctime>
class Car
{
    public:
        Car()
        {
            std::cout<<"New Car!"<<std::endl;
        }
        std::string brand;
        std::string model;
        std::string colour;
        int age;
        //Methods
        void drive()
        {
            std::cout<<"I'm driving"<<std::endl;
        }

        void driveOutside();
        int speed(int maxSpeed);
};
/*
void Car::driveOutside()
{
    std::cout<<"I'm driving outside"<<std::endl;
}
*/
int Car::speed(int maxSpeed)
{
    return maxSpeed;
}

int main()
{
    Car Auto1;
    Auto1.brand = "BMW";
    Auto1.model = "118i";
    Auto1.colour = "blue";
    Auto1.age = 1;


    std::cout<<"Brand: "<<Auto1.brand<<std::endl;
    std::cout<<"Model: "<<Auto1.model<<std::endl;
    std::cout<<"Colour: "<<Auto1.colour<<std::endl;
    std::cout<<"Age: "<<Auto1.age<<std::endl;

    std::cout<<"Speed? ";
    int a;
    std::cin>> a;
    std::cout<<"Speed: "<<Auto1.speed(a)<<std::endl;

    Auto1.drive();
   // Auto1.driveOutside();
    
    time_t timestamp;
    time(&timestamp);
    std::cout<<ctime(&timestamp);
}