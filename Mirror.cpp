#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "GameOfLife.h"
#include "Mirror.h"

using namespace std;

Mirror::Mirror()
{

}

Mirror::Mirror()
{

}

Mirror::~Mirror()
{
  delete[] dimensions;
  delete[] lastGen;
}

int Mirror::check(char** dimensions, int height, int width)
{
  int neighbors = 0
  int tempHeight;
  int tempWidth;

  for(i = 0; i <= dimensions[height]; i++)//checks bottom boundary
  {
    tempHeight++
  }

  for(i = 0; i <= dimensions[width]; i++)//checks right boundary
  {
    tempWidth++
  }

  for(int i = 0; i < height, i++)
  {
    for(int j = 0; j < width, j++) //top left corner
    {
      if(height = 0 || tempHeight == dimensions[i][j])
      {
       neighbors += 1
        if(width = 0 || tempWidth == dimensions[i][j])
        {
          neighbors += 1
        }
      }

      if(width = 0 || tempWidth == dimensions[i][j])
      {
        neightbors +=1
      }
      classic_board(int height, int width);
      classic_fill(int neighbors);


    }
  }
}
