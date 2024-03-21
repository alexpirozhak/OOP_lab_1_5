//
// Created by Олександр Пірожак on 13.03.2024.
//

#include "Car.h"
#include <iostream>

using namespace std;

void Car::Init(string mark, int cylinder, int power) {
    setMark(mark);
    setCylinder(cylinder);
    setPower(power);
}

void Car::Display() const {
    cout << endl;
    cout << "mark = " << mark << endl;
    cout << "cylinders = " << cylinder << endl;
    cout << "power = " << power << endl;
}

void Car::Read()
    {
        string mark;
        int cylinder, power;
        cout << endl;
        cout << "mark =  "; cin >> mark;
        cout << "cylinders =  "; cin >> cylinder;
        cout << "power =  "; cin >> power;
        Init(mark, cylinder, power);
    }

