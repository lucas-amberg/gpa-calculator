#include <iostream>

//Collects the number of classes in a given semester and returns it.
int getNumClasses(int semesterNumber)
{
  std::cout << "Please enter the number of classes you took in semester " << semesterNumber << ": ";
  
  int numClasses{};
  std::cin >> numClasses;

  return numClasses;
}
