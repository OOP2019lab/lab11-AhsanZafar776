#include"student.h"
#include"faculty.h"

int main ()
{
	
	student s("Ted","Thompson",22,3.91);
	faculty f("Richard","Karp",45,2,420);
		 //here the number of courses is 2
		 //and the extension number is 420
 
	s.printstudent();
	f.printfaculty();


	/*
	
output for exercise 5:

person invoked
student invoked
person invoked
faculty invoked
faculty member destroyed
person destroyed
student destroyed
person destroyed

*/

}