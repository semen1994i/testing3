#include <math.h>
#include <stdlib.h>
#include <vector>
using namespace std;

int damka(int  x, int  y, vector < vector <int> > board);


int checkers(int x, int y, vector < vector <int> > board);


int victory(vector < vector <int> > board);


int isBoard(int x, int y);


int move(int oldX, int oldY, int newX, int newY, vector < vector <int> > board);


int checkMove(int  oldX, int  oldY, int  newX, int  newY, vector < vector <int> > board);
