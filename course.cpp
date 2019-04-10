#include "l180997_lab10_student.h"
#include "l180997_lab10_course.h"

course :: course(string couna,string id): courseno(id)
{
	coursename=couna;
	
	maxstudents=4;
	m_student=new student*[4];
	for(int i=0;i<4;i++)
	{
		m_student[i]=nullptr;
	}
	sizestudents=0;
	cout<<endl;
}
void course:: addStudent(student *tuy)
{
	for(int i=0;i<4;i++)
	{
		if(this->m_student[i]== nullptr)
		{
			this->m_student[i]=tuy;
		}
	}
	cout<<endl;
}

ostream& operator<<(ostream &out, const course &asd)
{
	out<<"course name is : "<<asd.coursename<<endl;
	out<<"course number is : "<<asd.courseno<<endl;
	for(int i=0;i<4;i++)
	{
		if(asd.m_student[i]!=nullptr)
		{
			out<<"student name is: "<<asd.m_student[i]->name<<endl;
			out<<"student roll no is: "<<asd.m_student[i]->rollno<<endl;
			out<<"student user name is: "<<asd.m_student[i]->username<<endl;
		}
		
	}
	cout<<endl;
	return out;
}

void student :: task2_addCourse(course *gi)
{
	bool flag=0;
	for(int i=0;i<2;i++)
	{
		if(this->m_course[i]==gi)
		{
			cout<<"already present"<<endl;
			flag=1;
		}
		else if(this->m_course[i]== nullptr)
		{
			this->m_course[i]=gi;
			flag=1;
		}
	}
	cout<<endl;
	if(flag==1)
	{
		cout<<"course already present"<<endl;
	}
	cout<<endl;
}
void student :: task_3dropcourse(course *sd)
{
	bool flag=0;
	for(int i=0;i<sizescourses;i++)
	{
		if(sd==m_course[i])
		{
			flag=1;
			m_course[i]=m_course[i+1];
			m_course[i+1]=nullptr;
		}
	}
	if(flag==0)
	{
		cout<<"course not found"<<endl;
	}
	cout<<endl;

}
course :: ~course()
{
	delete[]m_student;
	m_student=nullptr;
}