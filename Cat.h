//
// File: Cat.h
// Description: Pet Information(derived classes)
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#ifndef CATH
#define CATH

#include <string>
#include "Pet.h"

class Cat : public Pet {
	private:
		string catBreed;

	public:
		void SetBreed(string userBreed);

		string GetBreed();
};

#endif