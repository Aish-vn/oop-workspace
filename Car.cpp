#include "Car.h"

Car::Car(int id) : Vehicle(id) {}

int Car::getParkingDuration() const {
    std::time_t now = std::time(nullptr);
    return static_cast<int>((now - timeOfEntry) * 0.9);
}