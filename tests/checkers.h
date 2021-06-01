#ifndef CHECKERS_H
#define CHECKERS_H
#include "function.h"
#include "vector"
#include <gtest/gtest.h>

TEST(checkers, positive){
    vector < vector <int> > ivector = {{-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0,-1, 0,-1, 0,-1, 0,-1},
                                       {-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1},
                                       { 1, 0, 1, 0, 1, 0, 1, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1} };
    EXPECT_EQ(checkers(0,0,ivector), 0);
}
TEST(checkers, negative){
    vector < vector <int> > ivector = {{-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0,-1, 0,-1, 0,-1, 0,-1},
                                       {-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1},
                                       { 1, 0, 1, 0, 1, 0, 1, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1} };
    EXPECT_NE(ivector[0][2], 0);
    EXPECT_EQ(checkers(3,5,ivector), 1);
}
#endif // CHECKERS_H
