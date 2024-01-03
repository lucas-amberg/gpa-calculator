#include <iostream>
#include <limits>

//Collects the number of classes in a given semester and returns it.
int getNumClasses(int semesterNumber)
{
  std::cout << "Please enter the number of classes you took in semester " << semesterNumber << ": ";
  
  int numClasses{};
  std::cin >> numClasses;
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

  return numClasses;
}
