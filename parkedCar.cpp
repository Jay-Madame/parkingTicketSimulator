#include "parkedCar.h"

parkedCar::parkedCar(std::string mk, std::string md, std::string cl, std::string ln, int mp): make(mk), model(md), color(cl), licenseNum(ln), minutesParked(mp)
{
}
std::string parkedCar::getMake() const
{
    return make;
}
std::string parkedCar::getModel() const
{
    return model;
}
std::string parkedCar::getColor() const
{
    return color;
}
std::string parkedCar::getLicenseNumber() const
{
    return licenseNum;
}
int parkedCar::getMinutesParked() const
{
    return minutesParked;
}

void parkedCar::setMinutesParked(int num){
    minutesParked = num;
}