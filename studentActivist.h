#pragma once
#include "student.h"
#include "studentDefault.h"



class StudentActivist : public StudentDefault
{
public:
	
	StudentActivist() = delete;

	StudentActivist( std::string t_firstName,  std::string t_secondName,  std::string t_parentName, unsigned  t_age);

	int getGrade() override;
	int getFinalGrade() override;

	virtual ~StudentActivist() = default;
};