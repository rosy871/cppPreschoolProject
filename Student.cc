
#include "Student.h"



Student::Student(string& studentPid,string& studenName, string& studentGender, string& studentGroup):Person( studentPid,  studenName, studentGender), group(studentGroup) {}

//Student::~Student(){}

//string Student::getName(){
//	return name;
//
//}
//
//int Student::getAge(){
//	return age;
//}
//
//string Student::getPid(){
//	return pid;
//
//}
//
//string Student::getSchoolName(){
//	return schoolName;
//
//}
string Student::getGroup()
{
	return group;

}
