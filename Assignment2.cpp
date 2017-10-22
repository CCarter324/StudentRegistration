// Assignment2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Student.h"
#include <vector>
#include <iostream>
using std::vector; using std::string; using std::cout; using std::endl;


int main()
{
	//Student objects arugements are passed
	Student firstStudent(3423, "George", 2017, "MG432");
	Student secondStudent(7845, "Molly", 2019, "CS321");
	Student thirdStudent(6729, "Ethan", 2018, "PY213");

	// Type definition: 
	// define the custom type 'Students' as a vector of strings
	vector<Student> studentItem;

	//Each student item is pushed into the vector
	studentItem.push_back(firstStudent);
	studentItem.push_back(secondStudent);
	studentItem.push_back(thirdStudent);

	//For loop goes through the vector and prints out 
	//student ID, name, graduation year and course to be registered.
	for (int i = 0; i < studentItem.size(); i++) {
		cout << "Student ID: " << studentItem[i].getID() << endl;
		cout << "Student Name: " << studentItem[i].getName() << endl;
		cout << "Graduation Year: " << studentItem[i].getYear() << endl;
		cout << "Requested course: " << studentItem[i].getCourse() << endl;
		cout << endl;
	}

	//Declare variable plain Student, assign to 1st item in vector
	Student s1 = studentItem[0];
	//Change year of graduation for first item in Student vector
	//DID NOT CHANGE THE GRADUATION DATE
	s1.setYear(2020);

	//Pointer is declared and initialized at second item in Student vector 
	Student* s2 = &studentItem[1];
	//Changes student ID of the 2nd item in Student vector
	s2->setID(1615);

	//Declare reference to third item in vector 
	Student &s3 = studentItem[2];
	//Changes student ID of the 2nd item in Student vector
	s3.setCourse("PS112");

	

	//Repeats loop to print out new improved list
	for (int j = 0; j < studentItem.size(); j++) {
		cout << "Student ID: " << studentItem[j].getID() << endl;
		cout << "Student Name: " << studentItem[j].getName() << endl;
		cout << "Graduation Year: " << studentItem[j].getYear() << endl;
		cout << "Requested course: " << studentItem[j].getCourse() << endl;
		cout << endl;
	}
}

