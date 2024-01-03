#include "getSemesterCount.h"
#include "calculateGPA.h"

#include <iostream>

//The purpose of this program is to collect the number of semesters 
//a user has taken, the number of units, and the grades for each class
//and return the calculated GPA.
int main()
{
  std::cout << "Welcome to Lucas Amberg's GPA Calculator\n\n";

  while(true)
  {

    int numSemesters{getSemesterCount()};

    double GPA{calculateGPA(numSemesters)};

    std::cout << "Your GPA is: " << GPA << "!\n";

    std::cout << "Would you like to perform another calculation [y/n]? ";


    char runAgain{};
    std::cin >> runAgain;

    if (runAgain != 'y' && runAgain != 'Y')
      return 0;
  }
  return 0;
}
