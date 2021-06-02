#ifndef DAMKA_H
#define DAMKA_H
#include <gtest/gtest.h>
#include "function.h"


TEST(damka, positive_white){
    vector < vector <int> > ivector = {{-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0,-1, 0,-1, 0,-1, 0,-1},
                                       {-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1},
                                       { 1, 0, 1, 0, 1, 0, 1, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1}};
    int x = 0;
    int y = 6;
    ivector[x][y] = 2;
    damka(x, y, ivector);
    EXPECT_GT(ivector[x][y], 0);
    EXPECT_EQ(x, 0);
    EXPECT_EQ(damka(x,y,ivector), 0);
}
TEST(damka, positive_black){
    vector < vector <int> > ivector = {{-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0,-1, 0,-1, 0,-1, 0,-1},
                                       {-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1},
                                       { 1, 0, 1, 0, 1, 0, 1, 0},
                                       { 0, 1, 0, 1, 0, 1, 0,-1} };
    EXPECT_EQ(damka(7,7,ivector), 0);
}
TEST(damka, positive2){
    vector < vector <int> > ivector = {{-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0,-1, 0,-1, 0,-1, 0,-1},
                                       {-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1},
                                       { 1, 0, 1, 0, 1, 0, 1, 0},
                                       { 0, 1, 0, 1, 0,-1, 0, 1} };
    int x = 7;
    int y = 5;
    EXPECT_LT(ivector[x][y], 0);
    EXPECT_EQ(x, 7);
    EXPECT_EQ(damka(x,y,ivector), 0);
}
TEST(damka, negative_zero){
    vector < vector <int> > ivector = {{-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0,-1, 0,-1, 0,-1, 0,-1},
                                       {-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1},
                                       { 1, 0, 1, 0, 1, 0, 1, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1} };
    EXPECT_EQ(damka(0,1,ivector), 1);
}
#endif
