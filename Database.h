#include "Student.h"
#include"Teacher.h"
using namespace std;
#include<vector>

#ifndef DATABASE_H_
#define DATABASE_H_

class Database {
	vector<Student> studentList;
	vector<Teacher> teacherList;

public:
	Database()=default;
	virtual ~Database();

	void addStudent(Student& s);
	void showStudent();

	void addTeacher(Teacher& t);
	void listTeacher();
};

#endif /* DATABASE_H_ */
