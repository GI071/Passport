#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include "Passport.h"
using namespace std;

			
void Passport::issueID() {
	
	std::cout<<"Enter birth day: "<<std::endl;
	std::cin >>day;
	std::cout<<"Enter birth month: "<<std::endl;
	std::cin >>month;
	
	if ((month==4 || month==6 || month==9 || month==12) && day>30 ) {
	} else if ((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12) && day>31) {
		cout<<"Not valid date";
		return;
	}
	std::cout<<"Enter birth year: "<<std::endl;
	std::cin >>year;
	if ((month==2 && day>29) || ((month==2 && day>28) && (year % 4 != 0))){	
		cout<<"Not valid date";
		return;
	}
	std::cout<<"Date is: "<<day<<","<<month<<","<<year<<std::endl;
	
	std::cout<<"Enter name: "<<std::endl;
	std::cin >>name;
	std::cout<<"Enter surname: "<<std::endl;
	std::cin >>surname;
	
	std::cout<<"Would you like to issue new serials?: for No=push '1' and for Yes = push '2'"<<std::endl;
	int temp = 0;
	std::cin>>temp;
	switch (temp) {
		case 1:
			if (serialNumber < 999999) {
				serialNumber += 1;
			} else if(serial2 == 'Z' && serial1 != 'Z') {
				serial1 += 1;
				serial2 += 'A';
				serialNumber = 1;
			} else {
				cout<<"Serial numbers finished, enter new here:"<<endl;
			}
			break;
		case 2:
			cout<<"enter new serials here:"<<endl;
			cin>>serial1>>serial2;
			cout<<"enter new starting serial Number here:"<<endl;
			cin>>serialNumber;
			break;
		default:
			cout<<"wrong choice, try over again"<<endl;
			return;
	}
	
	cout<<"Name, Surname: "<<name<<" "<<surname<<endl;
	cout<<"Birth Date: "<<day<<","<<month<<","<<year<<endl;
	cout<<"Passport# : "<<serial1<<serial2<<"-";
	printf("%06d\n", serialNumber);
	
	string passport = name + " " + surname + " " + to_string(day) + "/" + to_string(month) + "/" + to_string(year) + " " + serial1 + serial2 + "-" + to_string(serialNumber);
	cout<<passport<<endl;	

}

unsigned int Passport::day = 0;
unsigned int Passport::month = 0;
unsigned int Passport::year = 0;
std::string Passport::name = "";
std::string Passport::surname = "";
char Passport::serial1 = 'A';
char Passport::serial2 = 'A';
int Passport::serialNumber = 0;
std::string Passport::passport = "";


