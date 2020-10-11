#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

class GameOfLife()
{

public:
  GameOfLife(); //default constructor
  GameOfLife(int height, int width);
  ~GameOfLife();//default destructor

  double population(int height, int width);//gets population

  int writeBoard();//shows board to text file

  int newGen(); //creates new generation

  int check(); //checks board

  int boardGen(); //generate baord dimensions



  void reg_board(int height, int width, string file, int pop_dens);
  void classic_board(int height, int width, string file, int pop_dens);
  void doughnut_board(int height, int width, string file, int pop_dens);
  void mirror_board(int height, int width, string file, int pop_dens);

  void writeDimensions(string file);
  void markBoard(string file);

  void fill(); //fills board randomly
  void present(); //checks to see if a space is filled
  void empty(); //checks to see if empty
  void reset(); //clear board
  void copyGen();//copy over last gen
  void remove();//removes individual cell





  int height;
  int width;
  int generation;
  int pop_dens;
}
