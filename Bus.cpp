//
// Created by Олександр Пірожак on 13.03.2024.
//

#include "Bus.h"
#include <iostream>

using namespace std;

void Bus::Init(int seats, Car car)
{
    setSeats(seats);
    setCar(car);
}
void Bus::Display() const
{
    cout << endl;
    cout << "car: " << endl;
    car.Display();
    cout << "seats  = " << seats << endl;
}
void Bus::Read()
{
    int seats;
    Car c;
    cout << endl;
    cout << "car: " << endl;
    c.Read();
    cout << "seats =  "; cin >> seats;
    Init(seats, c);
}