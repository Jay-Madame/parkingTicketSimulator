/************************************************************************************************************************
**                                                                                                                     **
**  [ ] __The ParkingTicket Class:__                                                                                   **
**  This class should simulate a parking ticket.  The class's responsibilities are:                                    **
**    [ ] To report the make, model, color, and license number of the illegally parked car.                            **
**    [ ] To report the amount of the fine, which is $25 for the first hour or part of an hour                         **
**        that the car is illegally parked, plus $10 for every additional hour or part of an hour                      **
**        that the car is illegally parked.                                                                            **
**    [ ] To report the name and badge number of the _police officer_ issuing the ticket.                              **
**    [ ] Must override the insertion operator (<<).                                                                   **
**    [ ] Should include a static function that takes in a number of minutes and returns the                           **
**        appropriate fine for that number of minutes of illegal parking.                                              **
**                                                                                                                     **
**                                                                                                                     **
*************************************************************************************************************************/

#pragma once
#include "parkedCar.h"
#include "parkingMeter.h"
#include "policeOfficer.h"
#include <ostream>

class parkingTicket
{
private:
    parkedCar newParkedCar;
    parkingMeter purchaseTicket;
    double fee;
    policeOfficer police;

public:
    parkingTicket(parkedCar, policeOfficer, parkingMeter);
    double getFine() const;
    friend std::ostream &operator<<(std::ostream &strm, const parkingTicket &obj);
};