//
// Created by alexis on 21/02/16.
//

#include <gtest/gtest.h>
#include "LinkedList.hpp"

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
