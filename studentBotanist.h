#pragma once
#include "student.h"


class StudentBotanist : public Student
{
public:

	StudentBotanist() = default;
	
	StudentBotanist(const std::string& firstName, const std::string& secondName, std::string parentName, unsigned const age);

	int getGrade() override;
	int getFinalGrade() override;

	virtual ~StudentBotanist() = default;
};