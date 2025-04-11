#include <iostream>
#include <thread>
#include <chrono>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);

    for (int i = 0; i < 5; ++i)
        lot.parkVehicle(new Car(100 + i));
    for (int i = 0; i < 3; ++i)
        lot.parkVehicle(new Bus(200 + i));
    for (int i = 0; i < 2; ++i)
        lot.parkVehicle(new Motorbike(300 + i));

    std::this_thread::sleep_for(std::chrono::seconds(16));

    int overstayed = lot.countOverstayingVehicles(15);
    std::cout << "Overstaying vehicles: " << overstayed << std::endl;
    return 0;
}