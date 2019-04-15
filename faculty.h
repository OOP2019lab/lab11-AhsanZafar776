#pragma once
#include<iostream>
#include<string>
#include"person.h"
using namespace std;

class faculty : private person
{
	int course_count;
	int tele;
public:
	faculty(string,string,int,int,int );
	int getcourse_count();
	void setcourse_count();
	int gettele();
	void settele(int);
	~faculty();
	void printfaculty();

};