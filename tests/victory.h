#ifndef VICTORY_H
#define VICTORY_H
#include "../app/function.h"
#include <gtest/gtest.h>

TEST(victory, positive){
    vector < vector <int> > ivector = {{ 0, 0,-1, 0,-1, 0,-1, 0},
                                       { 0,-1, 0,-1, 0,-1, 0,-1},
                                       {-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0} };

    EXPECT_EQ(victory(ivector),0);
}
TEST(victory, negative){
    vector < vector <int> > ivector = {{-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0,-1, 0,-1, 0,-1, 0,-1},
                                       {-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1},
                                       { 1, 0, 1, 0, 1, 0, 1, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1} };
    EXPECT_EQ(victory(ivector),1);
}
#endif
