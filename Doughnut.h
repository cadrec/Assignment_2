#include <iostream>
#include "GameOfLife.h"

using namespace std;

class Doughnut : public GameOfLife
{
public:
  Doughnut();
  Doughnut();
  ~Doughnut();
  int check(char** dimensions, int height int width);
};
