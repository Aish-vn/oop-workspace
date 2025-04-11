#include "Bus.h"

Bus::Bus(int id) : Vehicle(id) {}

int Bus::getParkingDuration() const {
    std::time_t now = std::time(nullptr);
    return static_cast<int>((now - timeOfEntry) * 0.75);
}