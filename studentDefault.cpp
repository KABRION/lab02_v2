#include "studentDefault.h"

StudentDefault::StudentDefault(const std::string& t_firstName, const std::string& t_secondName, std::string t_parentName, unsigned const t_age)
{
	firstName_ = t_firstName;
	secondName_ = t_secondName;
	studentAge_ = t_age;
}

int StudentDefault::getGrade()
{
	return 1 + rand() % (6 - 2);
}

int StudentDefault::getFinalGrade()
{
	return 1 + rand() % (6 - 2);
}