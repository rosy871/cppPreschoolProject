/*
 * Person.cc
 *
 *  Created on: 4 Jan 2021
 *      Author: yalam
 */

#include "Person.h"

Person::Person() {
	// TODO Auto-generated constructor stub

}
Person::Person(string& pid, string& name,string& gender):pid(pid),name(name),gender(gender)
{}
string Person::getPid()
{
	return pid;
}
string Person::getName()
{
	return name;
}
string Person::getGender()
{
	return gender;


}
Person::~Person() {
	// TODO Auto-generated destructor stub
}

