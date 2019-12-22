#pragma once
#include "student.h"


class StudentDefault : public Student
{
public:
	 
	StudentDefault() {}

	StudentDefault(const std::string& t_firstName, const std::string& t_secondName, std::string t_parentName, unsigned const t_age);

	int getGrade() override;
	int getFinalGrade() override;

	virtual ~StudentDefault() = default;
};