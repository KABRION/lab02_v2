#include "studentActivist.h"

StudentActivist::StudentActivist(std::string t_firstName,  std::string t_secondName, std::string t_parentName, unsigned  t_age)
{
	firstName_ = t_firstName;
	secondName_ = t_secondName;
	studentAge_ = t_age;
}

int StudentActivist::getGrade()
{
	return 1 + rand() % (6 - 2);
}

int StudentActivist::getFinalGrade()
{
	return 3 + rand() % (6 - 3);
}
