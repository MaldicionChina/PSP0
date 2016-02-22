//
// Created by alexis on 21/02/16.
//

#include <gtest/gtest.h>
#include "LinkedList.hpp"

TEST(LinkedListTest, EmptyList){
    LinkedList list;
    ASSERT_EQ(list.getHead(), nullptr);
}
