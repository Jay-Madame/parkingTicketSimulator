/***************************************************************************************
**                                                                                    **
**                                                                                    **
**   [ ] __The PoliceOfficer Class:__                                                 **
**  This class should simulate a police officer inspecting parked cars.  The class's  **
**  responsibilities are:                                                             **
**    [ ] To know the police officer's name and badge number.                         **
**    [ ] To examine a _ParkedCar_ object and a _ParkingMeter_ object,                **
**        and determine whether the car's time has expired.                           **
**    [ ] To issue a parking ticket _(generate a ParkingTicket object)_               **
**        if the car's time has expired.                                              **
**                                                                                    **
**                                                                                    **
***************************************************************************************/

#pragma once
#include "parkedCar.h"
#include "parkingMeter.h"

class policeOfficer
{
private:
    std::string name, badgeNum;

    policeOfficer(std::string n, std::string bdgn);
    std::string getName() const;
    std::string getBadge() const;
    bool isTimeExpired(const parkedCar &car, const parkingMeter &meter) const;
    parkingTicket generateTicket(const parkedCar &car, const parkingMeter &meter) const;
};