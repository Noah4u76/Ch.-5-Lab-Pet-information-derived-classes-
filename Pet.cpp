//
// File: Pet.cpp
// Description: Pet Information(derived classes)
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "Pet.h"
#include <iostream>
#include <string>
using namespace std;

void Pet::SetName(string userName) {
	petName = userName;
}

string Pet::GetName() {
	return petName;
}

void Pet::SetAge(int userAge) {
	petAge = userAge;
}

int Pet::GetAge() {
	return petAge;
}

void Pet::PrintInfo() {
	cout << "Pet Information: " << endl;
	cout << "   Name: " << petName << endl;
	cout << "   Age: " << petAge << endl;
}