#include <iostream>
#include <string>
using namespace std;
#pragma once
class course;

class student
{
private:
	string username;
	string name;
	string rollno;
	course **m_course;
	int maxcourses;
	int sizescourses;
	void task2_addCourse(course *gi);
public:
	friend class course;
	void addCourse(course *ghi);
	student(string nam,string roll);
	friend ostream& operator<<(ostream &out, const student &pat);
	friend ostream& operator<<(ostream &out, const course &asd);
	void task_3dropcourse(course *sd);
	~student();
};

