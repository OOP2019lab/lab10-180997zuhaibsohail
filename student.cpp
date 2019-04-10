#include "l180997_lab10_student.h"
#include "l180997_lab10_course.h"


student :: student(string nam,string roll):username(nam)
{

	name=nam;
	rollno=roll;
	maxcourses=2;
	m_course=new course *[2];
	for(int i=0;i<2;i++)
	{
		m_course[i]=nullptr;
	}
	sizescourses=0;
	cout<<endl;
}
void student :: addCourse(course *ghi)
{
	bool flag=0;
	for(int i=0;i<2;i++)
	{
		if(this->m_course[i]==ghi)
		{
			cout<<"already present"<<endl;
			flag=1;
		}
		else if(this->m_course[i]== nullptr)
		{
			this->m_course[i]=ghi;
			m_course[i]-> addStudent(this);
			flag=1;
		}
	}

	if(flag==1)
	{
		cout<<"course already present"<<endl;
	}
	cout<<endl;
}

ostream& operator<<(ostream &out, const student &pat)
{
	out<<"student name is: "<<pat.name<<endl;
	out<<"student roll no is : "<<pat.rollno<<endl;
	out<<"student username is : "<<pat.username<<endl;
	for(int i=0;i<2;i++)
	{
		if(pat.m_course[i]!=nullptr)
		{
			out<<"course name is: "<<pat.m_course[i]->coursename<<endl;
			out<<"course no is: "<<pat.m_course[i]->courseno<<endl;
		}
		
		out<<endl;
	}
	cout<<endl;
	return out;
}

void course:: task2_addStudent(student *ty)
{
	for(int i=0;i<4;i++)
	{
		if(this->m_student[i]== nullptr)
		{
			this->m_student[i]=ty;
		}
	}
	cout<<endl;
}

student :: ~student()
{
	delete []m_course;
	m_course=nullptr;
}
