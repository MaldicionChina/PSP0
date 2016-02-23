//
// Created by alexis on 21/02/16.
//

#include <gtest/gtest.h>
#include "LinkedList.hpp"

double estimatedProxy[] = {160, 591, 114, 229, 230, 270, 128, 1657, 624, 1503};
int totalDatos = sizeof(  estimatedProxy) / sizeof( *estimatedProxy );

TEST(LinkedList, InputAndReturnData){
    LinkedList list;
    double data[] = {1,3.4,5};
    list.addData(data[0]);
    list.addData(data[1]);
    list.addData(data[2]);
                //Expected - Actual
    ASSERT_EQ(list.popData(),data[2]);
    ASSERT_EQ(list.popData(),data[1]);
    ASSERT_EQ(list.popData(),data[0]);
}

TEST(LinkedListCalculations, CalculateMean){
    LinkedList list;

    for(int posicion = 0; posicion < totalDatos; posicion++){
        list.addData(estimatedProxy[posicion]);
    }
                // Actual   - Expected - ABS Error
    ASSERT_NEAR(list.getMean(),550.6, 1);
}

TEST(LinkedListCalculations, CalculateVariance){
    LinkedList list;

    for(int posicion = 0; posicion < totalDatos; posicion++){
        list.addData(estimatedProxy[posicion]);
    }
                // Actual   - Expected - ABS Error
    ASSERT_NEAR(list.getVariance(),572.03, 1);
}
