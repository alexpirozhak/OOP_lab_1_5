//
// Created by Олександр Пірожак on 21.03.2024.
//

#include "gtest/gtest.h"
#include "../Bus.h"
#include "../Car.h"

TEST(BusTestSuite, BusCest) {
Bus b;
b.setSeats(5);
ASSERT_EQ(b.getSeats(), 5);
}