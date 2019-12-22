#pragma once
#include "student.h"


class StudentBotanist : public Student
{
public:

	StudentBotanist() = default;
	
	StudentBotanist(const std::string& t_firstName, const std::string& t_secondName, std::string t_parentName, unsigned const t_age);

	int getGrade() override;
	int getFinalGrade() override;

	virtual ~StudentBotanist() = default;
};