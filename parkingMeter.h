/*********************************************************************************************
 **                                                                                         **
 **                                                                                         **
 **                                                                                         **
 **  [ ] __The ParkingMeter Class:__                                                        **
 **       This class should simulate a parking meter.  The class's only responsibility is:  **
 **           [ ] To know the number of minutes of parking time that has been purchased.    **
 **                                                                                         **
 **                                                                                         **
 **                                                                                         **
 ********************************************************************************************/

#pragma once

class parkingMeter
{
private:
    int minPurchased;

public:
    int getMinPurchased();
    void setMinPurchased(int num);
};