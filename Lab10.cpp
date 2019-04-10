// Lab9.cpp : Defines the entry point for the console application.
//

#include "l180997_lab10_student.h"
#include "l180997_lab10_course.h"




int main()
{
	student *S1=new student("Anum","11-1351");
	student *S2=new student("Sara","12-6462");
	student *S3=new student("Sana","11-4531");
	student *S4=new student("Zara","12-4342");
	student *S5=new student("Hira","11-5940");

	course *C1=new course("OOP", "CS102");
	course *C2=new course("PF", "CS101");
	course *C3=new course("AI", "CS365");

	S1->addCourse(C1);
	S1->addCourse(C2);
	S1->addCourse(C1);
	S1->addCourse(C3);
	S2->addCourse(C2);
	S3->addCourse(C2);
	S4->addCourse(C2);
	S5->addCourse(C2);
	//C1->addStudent(S5);
	
	cout<< *S1; // this should print name RollNo and courses taken by S1;
	cout<< *C2; // this should print name and ID and list of student taking C2
	cout<< *C1; // this should print name and ID and list of student taking C2
	C1->task2_addStudent(S5);
	S5->task_3dropcourse(C1);
	S4->task_3dropcourse(C3);
	//C1->task3_dropstudent(S1);
	system("pause");
	return 0;
}

