/*Cadre Carrigan
  2290119
  ccarriga@chapman.edu
  cpsc 350
  assignment 2
  */

#incl#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "GameOfLife.h"
#include "GameOfLife.cpp"
using namespace std;

/*
1. Ask the user if they wish to start with a random configuration,
or specify a flatfile configuration. Prompt appropriately
depending on the response.
2. Ask the user what kind of boundary mode to run in.
3. Ask the user if they want a brief pause between generations,
 if they want to have to press the “enter” key,
 or if they want to output to a file.
4. Carry out the simulation
5. If the simulation is infinite, just keep running.
 But if the world becomes empty or stabilizes, the simulation should halt
  and ask the user to press “enter” to exit the program.
*/

int main(int argc, char *argv[])
{
  if(argc >1)
  {

    cout << "Do you have a map file you wish to use? (y/n)" << endl;
    while(True) //loops to check if user submits valid answer
    {
      string ans;
      cin >> ans;
      if(ans == 'y')//user provides board
      {
        cout << "Enter the File Path" << endl;
        cin << file path << endl;
        cout << "Which world do you want to initialize? " << endl;
        cout << "---------------------------------------" << endl;
        cout << "Classic"<< endl;
        cout << "Doughnut" << endl;
        cout << "Mirror" << endl;
        cin >> world;

      }

      if(ans == 'n') //board generation
      {

        cout << "What would you like to be the height of the map?" << endl;
        cin >> height;
        cout << "What would you like to be the width of the map?" << endl;
        cin >> width;
        cout << "Enter a number between '0' & '1' to represent population density (IE. '.34')" << endl;
        cin >> pop_dens;
        int checker
        char **dimensions = new char

        for(int i = 0; i < height; i++)
        {
          for(int j = 0; j < width; j++)
          {
            checker = float(rand()/RAND_MAX)
            if pop_dens >= checker
            {
              dimensions[height][width] = 'X'
            }
            else
            {
              dimensions[height][width]= '-'
            }
          }

        }
        cout << "Which world do you want to initialize? " << endl;
        cout << "---------------------------------------" << endl;
        cout << "Classic"<< endl;
        cout << "Doughnut" << endl;
        cout << "Mirror" << endl;
        cin >> world;





      else //invalid answer
      {

        cout << "Please type either 'y' for yes to use your own map file or 'n' for random generation of a map."
        cin >> ans;

      }
    }

  }


}
