#include <iostream>
#include "GameOfLife.h"

using namespace std;

class Mirror : public Classic
{
public:
  Mirror();
  Mirror();
  ~Mirror();
  int check(char** dimensions, int height int width);
};
