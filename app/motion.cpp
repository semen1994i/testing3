#include "function.h"

motions(int oldX, int oldY, int newX, int newY, int board[8][8])
{
    
    int futureX = oldX - newX;
    int futureY = oldY - newY;
    int checkForDamk = 0;
    int countOurCheck = 0;
    int absFutX = abs(futureX);
    if(abs(futureX) == abs(futureY) && abs(board[oldY][oldX]) > 1)
    {
        
        if(futureX < 0 && futureY < 0) 
        {
            
            for(absFutX = abs(futureX); absFutX > 0; absFutX--)
            {
                
                if(board[oldY+absFutX][oldX+absFutX] != 0 && board[oldY+absFutX][oldX+absFutX] != board[oldY][oldX])
                {
                    
                    checkForDamk++;

                }

            }
            if(checkForDamk > 1|| countOurCheck > 0)
            {
                return 0;
            }
            else
                for(absFutX++; absFutX < abs(futureX); absFutX++)
                {
                    board[oldY+absFutX][oldX+absFutX]=0;
                }
        }
        if(futureX < 0 && futureY > 0) 
        {
            for(absFutX = abs(futureX); absFutX > 0; absFutX--)
            {
                if(board[oldY-absFutX][oldX+absFutX] != 0 && board[oldY-absFutX][oldX+absFutX] != board[oldY][oldX])
                {
                    checkForDamk++;
                }

            }
            if(checkForDamk > 1|| countOurCheck > 0)
            {
                return 0;
            }
            else
                for(absFutX++; absFutX < abs(futureX); absFutX++)
                {
                    board[oldY-absFutX][oldX+absFutX]=0;
                }
        }
        if(futureX > 0 && futureY < 0) 
        {
            for(absFutX = abs(futureX); absFutX > 0; absFutX--)
            {
                if(board[oldY+absFutX][oldX-absFutX] !=0 && board[oldY+absFutX][oldX-absFutX] != board[oldY][oldX])
                {
                    checkForDamk++;
                }

            }
            if(checkForDamk > 1|| countOurCheck > 0)
            {
                return 0;
            }
            else
                for(absFutX++; absFutX < abs(futureX); absFutX++)
                {
                    board[oldY+absFutX][oldX-absFutX]=0;
                }
        }
        if(futureX > 0 && futureY > 0) 
        {
            for(absFutX = abs(futureX); absFutX > 0; absFutX--)
            {
                if(board[oldY-absFutX][oldX-absFutX] != 0 && board[oldY-absFutX][oldX-absFutX] != board[oldY][oldX])
                {
                    checkForDamk++;
                }

            }
            if(checkForDamk > 1|| countOurCheck > 0)
            {

                return 0;
            }
            else
                for(absFutX++; absFutX < abs(futureX); absFutX++)
                {
                    board[oldY-absFutX][oldX-absFutX]=0;
                }
        }
        return 1;
    }
    else if(futureX > 0 && futureY > 0)
    {
        return 0;
    }                                               //Влево вверх
    else if(futureX > 0 && futureY < 0) 
    {
        return 1;
        }
                                                   //Влево вниз
    else if(futureX < 0 && futureY > 0) 
    {
        return 0;
    }                                               //Вправо вверх
    else if(futureX < 0 && futureY < 0)
    {           //Вправо вниз
        if(board[oldY+1][oldX+1] == 0)
        {
            if(newX == (oldX + 1) && newY == (oldY + 1) && (board[oldY][oldX] < 0))
                return 1;
            else return 0;
        }
        else if(board[oldY+1][oldX+1] != 0 && board[oldY+1][oldX+1] != board[oldY][oldX])
        {
            if(newX == (oldX + 2) && newY == (oldY + 2))
            {
                board[oldY + 1][oldX + 1] = 0;
                return 1;
            }
            else return 0;
        }
    }                                               //Вправо вниз
    else return 0;
    return 0;
}
