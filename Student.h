#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include<vector>
using std::vector;
using std::string;

class Student
{
public:
	//constructors
	Student();
	Student(int, string, int, string);
	
	//getItems
	int getID();			//input student ID
	string getName();		//input student name
	int getYear();			//input student graduation year
	string getCourse();		//input wanted course

	//setItems
	void setID(int);			//set student ID
	void setName(string);		//set student name
	void setYear(int);			//set student's graduation year
	void setCourse(string);		//set registering course
	void testCourse(string);	//Test to validate wanted course with course being offered

	//deconstructor
	~Student();
private:
	const string validCourse = "CS321";		//Set valid course number 
	int studentID;
	string name;
	int gradYear;
	string course;
}; //end class Student
#endif

