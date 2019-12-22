#include "studentDefault.h"

StudentDefault::StudentDefault(const std::string& firstName, const std::string& secondName, std::string parentName, unsigned const age)
{
	firstName_ = firstName;
	secondName_ = secondName;
	studentAge_ = age;
}

int StudentDefault::getGrade()
{
	return 1 + rand() % (6 - 2);
}

int StudentDefault::getFinalGrade()
{
	return 1 + rand() % (6 - 2);
}