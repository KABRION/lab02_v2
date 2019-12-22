#include "studentActivist.h"

StudentActivist::StudentActivist(std::string firstName,  std::string secondName, std::string parentName, unsigned  age)
{
	firstName_ = firstName;
	secondName_ = secondName;
	studentAge_ = age;
}

int StudentActivist::getGrade()
{
	return 1 + rand() % (6 - 2);
}

int StudentActivist::getFinalGrade()
{
	return 3 + rand() % (6 - 3);
}
