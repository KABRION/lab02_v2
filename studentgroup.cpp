#include "studentgroup.h"

bool StudentGroup::findStudent(Student* student)
{
	for (auto i : students)
	{
		if (i == student)
			return true;
	}

	return false;
}



const Student* StudentGroup::getStudent(const std::string& _firstName, const std::string& _secondName)
{
	for (const auto i : students)
	{
		if (i->getFirstName() == _firstName && i->getSecondName() == _secondName)
			return i;
	}
	return nullptr;
}

std::string StudentGroup::getGroupName()
{
	return groupName_;
}

double StudentGroup::getMinRating()
{
	return minRating_;
}

size_t StudentGroup::getStudentsQty()
{
	return students.size();
}

int StudentGroup::getGroupID()
{
	return groupID_;
}

int StudentGroup::getMinAge()
{
	return minAge_;
}

void StudentGroup::setGroupName(const std::string& _groupName)
{
	groupName_ = _groupName;
}

void StudentGroup::setGroupID(const unsigned int& _groupID)
{
	groupID_ = _groupID;
}

void StudentGroup::setMinAge(const unsigned int& _age)
{
	minAge_ = _age;
}

void StudentGroup::setMinRating(const double& _rating)
{
	minRating_ = _rating;
}







void StudentGroup::addStudent(Student* student)
{
	if (getStudentsQty() >= studentsMax_)
		return;

	if (findStudent(student))
		return;	

	students.push_back(student);
	
}

void StudentGroup::deleteStudent(Student* student)
{
	for (auto it = students.begin(); it < students.end(); ++it)
	{
		if (*it == student)
		{
			students.erase(it);
			
			return;
		}
	}
}


void StudentGroup::startExam()
{
	for (auto& i : students)
		if (i->getGrade() <= 2)
			FinalExamList.push_back(i);
}

void StudentGroup::startFinalExam()
{
	for (auto it = FinalExamList.begin(); it != FinalExamList.end(); ++it)
		if ((*it)->getFinalGrade() <= 2)
			deleteStudent(*it);

	FinalExamList.clear();

}

std::vector<Student*>& StudentGroup::getStudentsList()
{
	return students;
}

std::ostream& operator<<(std::ostream& out, StudentGroup& group)
{
	std::vector<Student*> students = group.getStudentsList();

	out << "\n "   << group.getGroupName() << " [" << group.getStudentsQty() << " students]  \n";

	for (auto& i : students)
		out << " @ " << std::setw(15) << std::left << i->getSecondName() << std::setw(10) << i->getFirstName() << std::setw(10) << i->getParentName() << std::endl;

	

	return out;
}



