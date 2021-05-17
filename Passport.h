#ifndef PASSPORT_H
#define PASSPORT_H

#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;

class Passport {
	public:
		static unsigned int day;
		static unsigned int month;
		static unsigned int year;
		static std::string name;
		static std::string surname;
		static char serial1;
		static char serial2;
		static int serialNumber;
		static std::string passport;
	
	Passport(){}
	~Passport(){}
	
		static void issueID(); 		
};

#endif
