#include "stdafx.h"
#include "Student.h"

#include <iostream>
#include <string>
using std::cout; using std::cin; using std::endl;


Student::Student()
{
	this->studentID = 0;
	this->name = "Unknown";
	this->gradYear = 0;
	this->course = "Unknown";
}

Student::Student(int studentID, string name, int year, string course) :
	studentID(studentID), name(name), gradYear(year), course(course)
	{}

int Student::getID()
{
	return studentID;
}

string Student::getName()
{
	return name;
}

int Student::getYear()
{
	return gradYear;
}

string Student::getCourse()
{
	return course;
}

void Student::setID(int studentID)
{
	this->studentID = studentID;
}

void Student::setName(string name)
{
	this->name = name;
}

void Student::setYear(int gradYear)
{
	this->gradYear = gradYear;
}

void Student::setCourse(string course)
{
	this->course = course;
}

void Student::testCourse(string course)
{
	while (course != validCourse)
	{
		cout << "That course is not available this semester. Please choose another course." << endl;
		cin >> course;
	}

	cout << validCourse << " has been added to your scheudle." << endl;
}


Student::~Student()
{
}
