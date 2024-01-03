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
    int numClasses{getNumClasses(i)};
    //This for loop iterates over classes in a given semester
    for (int j{1}; j <= numClasses; ++j)
    {
      double unitsForClass{getUnits(j)};
      units += unitsForClass;
      double gradePointsForClass{getGradePoints(j, unitsForClass)};
    }
  }
}
