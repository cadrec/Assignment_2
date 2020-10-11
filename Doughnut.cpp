#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "GameOfLife.h"
#include "Doughnut.h"

using namespace std;

Doughnut::Doughnut()
{

}

Doughnut::Doughnut()
{

}

Doughnut::~Doughnut()
{
  delete[] dimensions;
  delete[] lastGen;
}
