#include"faculty.h"

int faculty::getcourse_count()
{
	return course_count;
}
void faculty::setcourse_count()
{
}
int faculty::gettele()
{
	return tele;

}
void faculty::settele(int tel)
{
	if (tel<=999&& tel>99)
	tele=tel;
}
faculty::faculty(string fname, string lname, int age,int count,int tel): person(fname,lname,age)
{
	course_count=count;
	tele=tel;
	cout<<"faculty invoked"<<endl;
}
faculty::~faculty()
{
	cout<<"faculty member destroyed"<<endl;
}
void faculty::printfaculty()
{
	cout<<"Faculty member:"<<getfname()<<" "<<getlname()<<", age:"<<age<<",Number of Courses: "<<getcourse_count()<<" Exe:"<<gettele()<<endl;
}