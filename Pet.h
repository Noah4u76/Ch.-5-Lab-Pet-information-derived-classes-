//
// File: Pet.h
// Description: Pet Information(derived classes)
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef PETH
#define PETH

#include <string>
using namespace std;

class Pet {
	protected:
		string petName;
		int petAge;

	public:
		void SetName(string userName);

		string GetName();

		void SetAge(int userAge);

		int GetAge();

		void PrintInfo();
};

#endif
