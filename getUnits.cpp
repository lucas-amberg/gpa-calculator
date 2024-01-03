#include "getUnits.h"

#include <iostream>
#include <limits>

//Collects the number of units for a given class
double getUnits(int numClass)
{
  std::cout << "\n\nPlease enter the number of units for class #" << numClass << ": ";

  double units{};
  std::cin >> units;
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
  return units;
}
