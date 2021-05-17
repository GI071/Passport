#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include "Passport.h"
using namespace std;


int main() {
	int counter = 1;
	map<int, string>pass;
	
	Passport* a = new Passport();
	Passport* b = new Passport();
	
	a->issueID();
	pass.insert(std::pair<int, std::string>(counter, Passport::passport));
	counter += 1;
			
	b->issueID();
	
	delete a;
	delete b;
	return 0;
}


