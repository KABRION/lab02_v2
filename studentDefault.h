#pragma once
#include "student.h"


class StudentDefault : public Student
{
public:
	 
	StudentDefault() {}

	StudentDefault(const std::string& firstName, const std::string& secondName, std::string parentName, unsigned const age);

	int getGrade() override;
	int getFinalGrade() override;

	virtual ~StudentDefault() = default;
};