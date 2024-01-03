#include "getUnits.h"

#include <iostream>

//Collects the number of units for a given class
double getUnits(int numClass)
{
  std::cout << "Please enter the number of units for class #" << numClass << ": ";

  double units{};
  std::cin >> units;
  return units;
}
