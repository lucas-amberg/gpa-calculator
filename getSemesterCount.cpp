#include "getSemesterCount.h"

#include <iostream>

//Gathers input from the user detailing the number of semesters the user
//has taken.
int getSemesterCount()
{
  std::cout << "How many semesters would you like to calculate for?\n";
  
  int semesters{};
  std::cin >> semesters;

  return semesters;
}
