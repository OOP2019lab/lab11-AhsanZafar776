#pragma once
#include<iostream>
#include<string>
#include"person.h"
using namespace std;

class student: private person
{
	string fyp_name;
	float cgpa;
public:
	student(string,string,int,float);
	string getfyp_name();
	float getcgpa();
	void setfyp_name(string name);
	void setcgpa(float);
	void printstudent();

	~student();

};