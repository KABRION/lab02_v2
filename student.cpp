#include "student.h"
#include "studentDefault.h"
#include "studentActivist.h"
#include "studentBotanist.h"


StudentDefault* Student::makeDefault()
{
	return new StudentDefault(firstName_, secondName_, parentName_, studentAge_);
}

StudentActivist* Student::makeActivist()
{
	return new StudentActivist(firstName_, secondName_, parentName_, studentAge_);
}

StudentBotanist* Student::makeBotanist()
{
	return new StudentBotanist(firstName_, secondName_, parentName_, studentAge_);
}



std::string Student::getFirstName()
{
	return firstName_;
}

std::string Student::getSecondName()
{
	return secondName_;
}

std::string Student::getParentName()
{
	return parentName_;
}



int Student::getStudentAge()
{
	return studentAge_;
}





void Student::setStudentAge(const unsigned int& _age)
{
	studentAge_ = _age;
}

void Student::setFirstName(const std::string& _firstName)
{
	firstName_ = _firstName;
}

void Student::setSecondName(const std::string& _secondName)
{
	secondName_ = _secondName;
}

void Student::setParentName(const std::string& _parentName)
{
	parentName_ = _parentName;
}



