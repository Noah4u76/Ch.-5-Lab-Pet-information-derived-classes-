//
// File: Main.cpp
// Description: Pet Information(derived classes)
// Created: Sun. March 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

#include <iostream>
#include<string>
#include "Cat.h"

using namespace std;

int main() {

	string petName, catName, catBreed;
	int petAge, catAge;

	Pet myPet;
	Cat myCat;

	getline(cin, petName);
	cin >> petAge;
	cin.ignore();
	getline(cin, catName);
	cin >> catAge;
	cin.ignore();
	getline(cin, catBreed);

	// DONE: Create generic pet (using petName, petAge) and then call PrintInfo       
  myPet.SetName(petName);
  myPet.SetAge(petAge);
  myPet.PrintInfo();

	// DONE: Create cat pet (using catName, catAge, catBreed) and then call PrintInfo
  myCat.SetName(catName);
  myCat.SetAge(catAge);
  myCat.SetBreed(catBreed);
  myCat.PrintInfo();

	// DONE: Use GetBreed(), to output the breed of the cat
  cout << "   Breed: " << myCat.GetBreed() << endl;
  return 0;

}
