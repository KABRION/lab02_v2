#include "studentBotanist.h"

StudentBotanist::StudentBotanist(const std::string& firstName, const std::string& secondName, std::string parentName, unsigned const age)
{
	firstName_ = firstName;
	secondName_ = secondName;
	studentAge_ = age;
}

int StudentBotanist::getGrade()
{
	return 4 + rand() % (6 - 4);
}

int StudentBotanist::getFinalGrade()
{
	return 4 + rand() % (6 - 4);
}