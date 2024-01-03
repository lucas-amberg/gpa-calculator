#include "calculateGPA.h"
#include "getNumClasses.h"
#include "getUnits.h"
#include "getGradePoints.h"

#include <iostream>

double calculateGPA(int numSemesters)
{
  double units{0.0};
  double gradePoints{0.0};
  for (int i{1}; i <= numSemesters; ++i)
  {
    std::cout << "Lets do semester #" << i << ".\n";
    double semesterUnits{0.0};
    double semesterGradePoints{0.0};
    int numClasses{getNumClasses(i)};
    //This for loop iterates over classes in a given semester
    for (int j{1}; j <= numClasses; ++j)
    {
      double unitsForClass{getUnits(j)};
      semesterUnits += unitsForClass;
      double gradePointsForClass{getGradePoints(j, unitsForClass)};
      semesterGradePoints += gradePointsForClass;
    }
    //Outputs the GPA for the current semester
    std::cout << "\nYour GPA for semester " << i << " was " << semesterGradePoints / semesterUnits << "\n";
    units += semesterUnits;
    gradePoints += semesterGradePoints;
    std::cout << "\n-------------------------------------------------------------------------------------\n\n";
  }
  std::cout << "All semesters calculated!\n";
  return gradePoints / units;
}
