#pragma once

#include "student.h"
#include "studentDefault.h"
#include "studentActivist.h"
#include "studentBotanist.h"


class StudentGroup
{
public:

	StudentGroup() = delete;

	StudentGroup(std::string groupName, unsigned int groupID)
		: groupName_(groupName), groupID_(groupID) {}

	StudentGroup(std::string groupName, unsigned int groupID, unsigned int minAge, double minRating, int studentsMax)
		: groupName_(groupName), groupID_(groupID), minAge_(minAge), minRating_(minRating), studentsMax_(studentsMax) {}




	const Student* getStudent(const std::string& _firstName, const std::string& _secondName);
	std::string getGroupName();
	double getMinRating();
	size_t getStudentsQty();
	int getGroupID();
	int getMinAge();

	void addStudent(Student* student);
	void deleteStudent(Student* student);

	void setGroupName(const std::string& groupName);
	void setGroupID(const unsigned int& groupID);
	void setMinAge(const unsigned int& age);
	void setMinRating(const double& rating);
	
	void startExam();
	void startFinalExam();

	std::vector<Student*>& getStudentsList();
	
	

private:
	std::string groupName_;
	unsigned int groupID_;
	unsigned int minAge_ = 0;
	double minRating_ = 0.0;
	size_t studentsMax_ = 20;

	std::vector<Student*> students;
	std::vector<Student*> FinalExamList;

	bool findStudent(Student* student);
	

};

std::ostream& operator<< (std::ostream& out, StudentGroup& group);