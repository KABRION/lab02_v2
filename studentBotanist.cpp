#include "studentBotanist.h"

StudentBotanist::StudentBotanist(const std::string& t_firstName, const std::string& t_secondName, std::string t_parentName, unsigned const t_age)
{
	firstName_ = t_firstName;
	secondName_ = t_secondName;
	studentAge_ = t_age;
}

int StudentBotanist::getGrade()
{
	return 4 + rand() % (6 - 4);
}

int StudentBotanist::getFinalGrade()
{
	return 4 + rand() % (6 - 4);
}