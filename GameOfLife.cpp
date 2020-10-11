/*Cadre Carrigan
  2290119
  ccarriga@chapman.edu
  cpsc 350
  assignment 2
  */
#include <iostream>
#include <fstream>
#include <cmath>
#include <random>
#include "GameOfLife.h"
using namespace std;

GameOfLife::GameOfLife() // constructor
{
  height = 0;
  length = 0;
  generation = 0;
  dimensions = NULL;
  lastGen = NULL;
}

GameOfLife::GameOfLife(int length, int height)//constructor
{
  row = length;
  column = height;

  dimensions = new char * [row];
  for(int i = 0; i < row, i++)
  {
    for(int j = 0; j < column, j++)
    {
      dimensions[i] = new char[j];
    }
  }
  height = 0;
  length = 0;
  generation = 0;
  lastGen = dimensions;

}

GameOfLife::~GameOfLife() // destructor
{
  delete[] dimensions;
  delete[] lastGen;
}

void GameOfLife::reg_board(int height, int width, double population, string fileInput)
{
  //file input
  string line;
  cout << "Enter the file Name" << endl;
  cin >> fileInput;
  ifstream myfile(fileInput + ".txt");

}

void GameOfLife::classic_board(int height, int width) //checks for neighbors on classic board
{
  int neighbors;

  if(dimensions[height + 1][width] == 'X' ) //one above space
  {
    ++neighbors;
  }
  if(dimensions[height][width + 1] == 'X' ) //one to right of space
  {
    ++neighbors;
  }
  if(dimensions[height - 1][width] == 'X' ) //one below space
  {
    ++neighbors;
  }
  if(dimensions[height][width - 1] == 'X' ) //one to left of space
  {
    ++neighbors;
  }
  if(dimensions[height + 1][width + 1] == 'X' ) //up and to the right one of space
  {
    ++neighbors;
  }
  if(dimensions[height - 1][width - 1] == 'X' ) //down and to the left one of space
  {
    ++neighbors;
  }
  if(dimensions[height + 1][width - 1] == 'X' ) //up and to the left of space
  {
    ++neighbors;
  }
  if(dimensions[height - 1][width + 1] == 'X' ) //down and to the right of space
  {
    ++neighbors;
  }

}

void GameOfLife::classic_fill(int neighbors)
{
  if(neighbors <= 1)
  {
    dimensions[height][width] = '-';
  }
  if(neighbors == 3)
  {
    dimensions[height][width] = 'X';
  }
  if(neighbors > 3)
  {
    dimensions[height][width] = '-';
  }
}

void GameOfLife::doughnut_board(int height, int width, double population)
{

}

void GameOfLife::mirror_board(int height, int width, double population)
{

}

void GameOfLife::copyGen()//takes the last generation and copys it to the new generation
{
  for(int i = 0; i < width; i++)
  {
    for(int j = 0; i < height; i++)
    {
      dimensions[i][j] = lastGen [i][j];
    }
  }

}

void GameOfLife::writeBoard()//Board display
{
  cout << "Here is the board for generation " << generation << ": " << endl;
  cout << "" << endl;//spacing between sentence and board results
  cout << "" << endl;

  for(int i = 0; i < width; i++)
  {
    for(int j = 0; i < height; i++)
    {
      cout << dimensions[i][j];
    }
    cout << endl;
  }
  cout << endl;
}

bool GameOfLife::empty();
{
  for(inti = 0; i < width; i++)
  {
    for(int j = 0; j < height; j++)
    {
      if(dimensions[i][j] == 'X');
      {
        cout << "Life still exists." << endl;
        return true;
      }
    }
  }
  cout << "Life no longer exists on the grid." << endl;
  return false;
}
