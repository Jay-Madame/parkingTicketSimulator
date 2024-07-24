#include "parkingTicket.h"

parkingTicket::parkingTicket(parkedCar car, policeOfficer officer, parkingMeter meter)
    : newParkedCar(car), police(officer), purchaseTicket(meter)
{
    int overtimeMinutes = newParkedCar.getMinutesParked() - purchaseTicket.getMinutesPurchased();
    fee = calculateFine(overtimeMinutes);
}

double parkingTicket::getFine() const
{
    return fee;
}

double parkingTicket::calculateFine(int minutes)
{
    if (minutes <= 0)
        return 0;
    int hours = (minutes + 59) / 60;
    return 25 + (hours - 1) * 10;
}

std::ostream &operator<<(std::ostream &strm, const parkingTicket &obj)
{
    strm << newParkedCar.getMake(); 
}
