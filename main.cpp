#include "getSemesterCount.h"
#include "calculateGPA.h"

#include <iostream>

//The purpose of this program is to collect the number of semesters 
//a user has taken, the number of units, and the grades for each class
//and return the calculated GPA.
int main()
{
  std::cout << "Welcome to Lucas Amberg's GPA Calculator";

  int numSemesters{getSemesterCount()};

  return 0;
}
