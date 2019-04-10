#include <iostream>
#include <string>
using namespace std;
#pragma once
class student;

class course
{
private:
	string coursename;
	const string courseno;
	student **m_student;
	int maxstudents;
	int sizestudents;
	void addStudent(student *tuy);
public:
	friend class student;
	course(string couna,string id);
	friend ostream& operator<<(ostream &out, const course &asd);
	friend ostream& operator<<(ostream &out, const student &pat);
	void task2_addStudent(student *ty);
	~course();
};