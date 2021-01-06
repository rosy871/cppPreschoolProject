#include <string>

using namespace std;


#ifndef PERSON_H_
#define PERSON_H_

class Person {
private:
	string pid;
	string name;
	string gender;

public:
	Person();
	Person(string& pid, string& name,string& gender);

	string getPid();
	string getName();
	string getGender();

	virtual ~Person();
};

#endif /* PERSON_H_ */
