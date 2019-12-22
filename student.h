#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <array>
#include <iomanip>




class StudentDefault;
class StudentActivist;
class StudentBotanist;



class Student
{
public:

	Student() {}

	Student(std::string firstName, std::string secondName, std::string parentName,  int studentAge)
		: firstName_(firstName), secondName_(secondName), parentName_(parentName), studentAge_(studentAge) {}


	StudentDefault* makeDefault();
	StudentActivist* makeActivist();
	StudentBotanist* makeBotanist();


	
	std::string getFirstName();
	std::string getSecondName();
	std::string getParentName();	
	int getStudentAge();
	


	void setStudentAge(const unsigned int& age);
	void setFirstName(const std::string& firstName);
	void setSecondName(const std::string& secondName);
	void setParentName(const std::string& parentName);
	

	


	virtual int getGrade() = 0;
	virtual int getFinalGrade() = 0;

	virtual ~Student() = default;

protected:

	

	std::string firstName_;
	std::string secondName_;
	std::string parentName_;	
	unsigned int studentAge_;
	


};