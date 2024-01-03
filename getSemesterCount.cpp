#include "getSemesterCount.h"

#include <iostream>
#include <limits>

//Gathers input from the user detailing the number of semesters the user
//has taken.
int getSemesterCount()
{
  std::cout << "How many semesters would you like to calculate for?\n";
  
  int semesters{};
  std::cin >> semesters;

  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  if (!std::cin) // has a previous extraction failed or overflowed?
  {
      if (std::cin.eof()) // if the stream was closed
      {
          exit(0); // shut down the program now
      }

      std::cin.clear(); // get out of failure mode
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input
  }

  return semesters;
}
