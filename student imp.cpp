#include"student.h"


student::student(string fname,string lname,int a, float gpa) : person(fname,lname,a)
{
	cout<<"student invoked"<<endl;;
	cgpa=gpa;
}
student::~student()
{
	cout<<"student destroyed"<<endl;
}
string student::getfyp_name()
{
	return fyp_name;
}
void student::setfyp_name(string name)
{
	fyp_name=name;
}
float student::getcgpa()
{
	return cgpa;
}
void student::setcgpa(float gpa)
{
	cgpa=gpa;
}
void student::printstudent()
{
	cout<<getfname()<<" "<<getlname()<<" is "<<age<<" years old";
	cout<<",his cgpa is "<<cgpa<<endl;
}