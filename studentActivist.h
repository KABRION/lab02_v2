#pragma once
#include "student.h"
#include "studentDefault.h"



class StudentActivist : public StudentDefault
{
public:
	
	StudentActivist() = delete;

	StudentActivist( std::string firstName,  std::string secondName,  std::string parentName, unsigned  age);

	int getGrade() override;
	int getFinalGrade() override;

	virtual ~StudentActivist() = default;
};