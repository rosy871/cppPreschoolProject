#include<string>
#include "Person.h"


using namespace std;

#ifndef TEACHER_H_
#define TEACHER_H_

class Teacher: public Person {
	string group;
	string position;
public:
	Teacher(string& pid, string& name,string& gender, string& group, string& position);
	virtual ~Teacher()=default;


	string getGroup();
	string getPosition();
};

#endif /* TEACHER_H_ */
