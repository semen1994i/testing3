#include "function.h"
#include <vector>


int main()
{
    vector < vector <int> > ivector = {{-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0,-1, 0,-1, 0,-1, 0,-1},
                                       {-1, 0,-1, 0,-1, 0,-1, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 0, 0, 0, 0, 0, 0, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1},
                                       { 1, 0, 1, 0, 1, 0, 1, 0},
                                       { 0, 1, 0, 1, 0, 1, 0, 1} };

    int oldX = 0;
    int oldY = 0;
    int newX = 1;
    int newY = 1;


    move(oldX, oldY, newX, newY, ivector);

    
    damka(oldX, oldY, ivector);
    
    
    isBoard(oldX, oldY);


    checkers(oldX, oldY, ivector);

    
    victory(ivector);


    checkMove(oldX, oldY, newX, newY, ivector);


    return 0;
}

