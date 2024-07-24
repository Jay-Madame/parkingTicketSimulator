#include "policeOfficer.h"
#include "parkingTicket.h"

policeOfficer::policeOfficer(std::string n, std::string bdgn) : name(n), badgeNum(bdgn) {}

std::string policeOfficer::getName() const
{
    return name;
}

std::string policeOfficer::getBadge() const
{
    return badgeNum;
}

bool policeOfficer::isTimeExpired(const parkedCar &car, const parkingMeter &meter) const
{
    return car.getMinutesParked() > meter.getMinPurchased();
}

parkingTicket policeOfficer::generateTicket(const parkedCar &car, const parkingMeter &meter) const;
{
    if (isTimeExpired(car, meter))
    {
        return parkingTicket(car, *this, meter);
    }
    // Return a default parkingTicket or handle no ticket scenario
    return parkingTicket(parkedCar("", "", "", "", 0), *this, parkingMeter(0));
}
