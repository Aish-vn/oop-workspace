#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    int n;
    std::cout << "Enter number of vehicles: ";
    std::cin >> n;

    Vehicle** vehicles = new Vehicle*[n];

    for (int i = 0; i < n; ++i) {
        int type, id;
        std::cout << "Enter type (1-Car, 2-Bus, 3-Motorbike) and ID: ";
        std::cin >> type >> id;
        if (type == 1)
            vehicles[i] = new Car(id);
        else if (type == 2)
            vehicles[i] = new Bus(id);
        else
            vehicles[i] = new Motorbike(id);
    }

    for (int i = 0; i < n; ++i) {
        std::cout << "Vehicle ID " << vehicles[i]->getID() << " Duration: " << vehicles[i]->getParkingDuration() << "s\n";
        delete vehicles[i];
    }

    delete[] vehicles;
    return 0;
}