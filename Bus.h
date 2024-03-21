//
// Created by Олександр Пірожак on 13.03.2024.
//

#pragma once
#include <string>
#include "Car.h"

using namespace std;

class Bus{

private:
    int seats;
    Car car;

public:
    int getSeats() const { return seats; }
    Car getCar() const { return car; }

    void setSeats(int seats) { this->seats = seats; }
    void setCar(Car car) { this->car = car; }

    void Init(int seats, Car car);
    void Display() const;
    void Read();

};