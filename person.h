#pragma once
#include<iostream>
#include<string>
using namespace std;
class person
{
	string firstname;
	string lastname;
protected:
	int age;
public:
	person(string,string,int);
	string getfname();
	string getlname();
	void setfname(string);
	void setlname(string);
	int getage();
	void setage(int );
	void printinformation();
	~person();
};