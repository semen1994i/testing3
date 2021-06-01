#ifndef ISBOARD_H
#define ISBOARD_H
#include "function.h"
#include <gtest/gtest.h>

TEST(isBoard,positive){
    int x = 2;
    int y = 5;
    isBoard(0, 4);
    EXPECT_LE(x, 7);
    EXPECT_EQ(isBoard(x,y),0);
    EXPECT_EQ(isBoard(0,4),0);
    EXPECT_EQ(isBoard(0,0),0);
}
TEST(isBoard,negative){
    EXPECT_EQ(isBoard(12,6),1);
    EXPECT_EQ(isBoard(10,5),1);
}
#endif
