/*************************************************************************************
**                                                                                  **
**                                                                                  **
**   [X] __The ParkedCar Class:__                                                   **
**    This class should simulate a parked car.  The class's responsibilities are:   **
**      [X] To know the car's make, model, color, license number,                   **
**      and the number of minutes the car has been parked.                          **
**                                                                                  **
**                                                                                  **
**************************************************************************************/

#pragma once

class parkedCar
{
private:
    std::string make, model, color, licenseNum;
    int minutesParked;

public:
    parkedCar(std::string mk, std::string md, std::string cl, std::string ln, int mp);
    std::string getMake() const;
    std::string getModel() const;
    std::string getColor() const;
    std::string getLicenseNumber() const;
    int getMinutesParked() const;
    void setMinutesParked(int num);
};