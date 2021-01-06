
#include "Teacher.h"



Teacher::Teacher(string& teachPid, string& teachName, string& teachGender,string& teachGroup, string& teachPosition) :Person(teachPid, teachName, teachGender), group(teachGroup),position(teachPosition){


}


string Teacher::getGroup(){
return group;

}

string Teacher::getPosition(){
return position;

}

