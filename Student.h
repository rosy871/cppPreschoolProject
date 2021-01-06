#include<string>
#include "Person.h"

#ifndef STUDENT_H_
#define STUDENT_H_

using namespace std;

class Student :public Person{

	string group;


public:
	Student(string& pid, string& name,string& gender, string& group);
	virtual ~Student()=default;

	string getGroup();

};

#endif /* STUDENT_H_ */
