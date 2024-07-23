# July 23 Assignment

## Jewell Callahan

Design a set of classes that work together to simulate a police officer issuing a parking ticket.  The classes you should design are:

[ ] __The ParkedCar Class:__
  This class should simulate a parked car.  The class's responsibilities are:
    [ ] To know the car's make, model, color, license number, and the number of minutes the car has been parked.

[ ] __The ParkingMeter Class:__
 This class should simulate a parking meter.  The class's only responsibility is:
    [ ] To know the number of minutes of parking time that has been purchased.

[ ] __The ParkingTicket Class:__
 This class should simulate a parking ticket.  The class's responsibilities are:
    [ ] To report the make, model, color, and license number of the illegally parked car.
    [ ] To report the amount of the fine, which is $25 for the first hour or part of an hour that the car is illegally parked, plus $10 for every additional hour or part of an hour that the car is illegally parked.
    [ ] To report the name and badge number of the _police officer_ issuing the ticket.
    [ ] Must override the insertion operator (<<).
    [ ] Should include a static function that takes in a number of minutes and returns the appropriate fine for that number of minutes of illegal parking.
    
[ ] __The PoliceOfficer Class:__
  This class should simulate a police officer inspecting parked cars.  The class's responsibilities are:
    [ ] To know the police officer's name and badge number.
    [ ] To examine a _ParkedCar_ object and a _ParkingMeter_ object, and determine whether the car's time has expired.
    [ ] To issue a parking ticket _(generate a ParkingTicket object)_ if the car's time has expired.