#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);
    while (lot.getCount() < 10) {
        int type, id;
        std::cout << "Enter type (1-Car, 2-Bus, 3-Motorbike) and ID: ";
        std::cin >> type >> id;
        Vehicle* v;
        if (type == 1)
            v = new Car(id);
        else if (type == 2)
            v = new Bus(id);
        else
            v = new Motorbike(id);

        lot.parkVehicle(v);
    }

    int removeID;
    std::cout << "Enter ID to unpark: ";
    std::cin >> removeID;
    lot.unparkVehicle(removeID);
    return 0;
}