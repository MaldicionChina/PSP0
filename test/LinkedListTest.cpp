//
// Created by alexis on 21/02/16.
//

#include <gtest/gtest.h>
#include "LinkedList.hpp"

double estimatedProxy[] = {160, 591, 114, 229, 230, 270, 128, 1657, 624, 1503};
double developmentHours[] = {15.0, 69.9, 6.5, 22.4, 28.4, 65.9, 19.4, 198.7, 38.8, 138.2 };
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
    LinkedList listEstimatedProxy;
    LinkedList listDevelopment;

    for(int posicion = 0; posicion < totalDatos; posicion++){
        listEstimatedProxy.addData(estimatedProxy[posicion]);
        listDevelopment.addData(developmentHours[posicion]);
    }
                // Actual   - Expected - ABS Error
    ASSERT_NEAR(listEstimatedProxy.getMean(),550.6, 1);
    ASSERT_NEAR(listDevelopment.getMean(),60.32, 1);
}

TEST(LinkedListCalculations, CalculateVariance){

    LinkedList listEstimatedProxy;
    LinkedList listDevelopment;

    for(int posicion = 0; posicion < totalDatos; posicion++){
        listEstimatedProxy.addData(estimatedProxy[posicion]);
        listDevelopment.addData(developmentHours[posicion]);
    }
                // Actual   - Expected - ABS Error
    ASSERT_NEAR(listEstimatedProxy.getVariance(),572.03, 1);
    ASSERT_NEAR(listDevelopment.getVariance(),62.26, 1);

}
