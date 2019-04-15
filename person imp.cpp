#pragma once
#include"person.h"


person::person(string first,string last,int a)
{
	firstname=first;
	lastname=last;
	age=a;
	cout<<"person invoked"<<endl;;
}
person::~person()
{
	cout<<"person destroyed"<<endl;
}
string person::getfname()
{
	return firstname;
}
void person::setfname(string f)
{
	firstname=f;
}
string person::getlname()
{
	return lastname;
}
void person::setlname(string l)
{
	firstname=l;
}
int person::getage()
{
	return age;

}
void person::setage(int a)
{
	age=a;
}
void person::printinformation()
{
	cout<<firstname<<" "<<lastname<<"is "<<age<<" years old";
}
