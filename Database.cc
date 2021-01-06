#include <iostream>
#include<fstream>


#include "Database.h"


Database::~Database() {
	// TODO Auto-generated destructor stub
}


void Database::addStudent(Student& s)
{
	studentList.push_back(s);

}


void Database::showStudent()
{
	int i=1;
	for(Student st: studentList)
	{
		cout<<i<<".  "<<st.getName()<<"\t"<<st.getPid()<<"\t"<<st.getGender()<<"\t"<<st.getGroup()<<endl;
		i++;
	}

}

void Database::addTeacher(Teacher& t)

{
	//	ofstream outputfile("teacher.txt");
	teacherList.push_back(t);
	//	outputfile<<teacherList;
}

void Database::listTeacher()
{
	int i=1;
	for(Teacher t: teacherList)
	{
		cout<<i<<".  "<<t.getName()<<"\t"<<t.getPid()<<"\t"<<t.getGender()<<"\t"<<t.getGroup()<<"\t"<<t.getPosition()<<endl;
		i++;
	}

}



