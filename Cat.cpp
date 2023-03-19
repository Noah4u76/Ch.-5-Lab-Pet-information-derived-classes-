//
// File: Cat.cpp
// Description: Pet Information(derived classes)
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include "Cat.h"
#include <iostream>
#include <string>
using namespace std;

void Cat::SetBreed(string userBreed) {
	catBreed = userBreed;
}

string Cat::GetBreed() {
	return catBreed;
}