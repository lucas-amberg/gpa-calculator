#include <iostream>
#include <limits>

//Gathers the grade for a given class from the user and returns the grade points
double getGradePoints(int numClass, double units)
{
  //Ensures the user inputs a valid grade, repeats if not
  while (true)
  {
    std::cout << "Please enter the grade you recieved in class #" << numClass << ": ";

    char gradeRecieved{};
    std::cin >> gradeRecieved;

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

    switch(gradeRecieved)
    {
      case 'a':
      case 'A':
      case '4':
        return 4.0 * units;
      case 'b':
      case 'B':
      case '3':
        return 3.0 * units;
      case 'c':
      case 'C':
      case '2':
        return 2.0 * units;
      case 'd':
      case 'D':
      case '1':
        return 1.0 * units;
      case 'f':
      case 'F':
      case '0':
        return 0.0 * units;
    }
    std::cout << "Invalid input, please try again (letters A-F, numbers 0-4).\n";
  }
}
