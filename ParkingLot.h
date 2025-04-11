#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {
private:
    Vehicle** vehicles;
    int maxCapacity;
    int currentCount;
public:
    ParkingLot(int capacity);
    ~ParkingLot();
    int getCount() const;
    bool parkVehicle(Vehicle* v);
    bool unparkVehicle(int id);
    int countOverstayingVehicles(int maxParkingDuration);
};

#endif