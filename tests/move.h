#ifndef MOVE_H
#define MOVE_H
#include "../app/function.cpp"
#include <gtest/gtest.h>

TEST(move, positive){
    vector < vector <int> > ivector = {{-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0,-1, 0,-1, 0,-1, 0,-1},
                                       {-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1},
                                       { 1, 0, 1, 0, 1, 0, 1, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1} };

    int oldx = 5;
    int oldy = 1;
    int newx = 4;
    int newy = 0;
    move(oldx,oldy,newx,newy,ivector);
    
    EXPECT_LE(oldx, 7);
    EXPECT_EQ(ivector[5][1], 1);
    EXPECT_EQ(ivector[4][0], 0);
}
TEST(move, negative){
    vector < vector <int> > ivector = {{-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0,-1, 0,-1, 0,-1, 0,-1},
                                       {-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1},
                                       { 1, 0, 1, 0, 1, 0, 1, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1} };
    move(0,0,3,3,ivector);
    EXPECT_EQ(ivector[0][0], -1);
    EXPECT_EQ(ivector[3][3], 0);
}
#endif
