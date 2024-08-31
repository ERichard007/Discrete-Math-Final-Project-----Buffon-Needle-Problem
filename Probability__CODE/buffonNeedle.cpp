#include <iostream>
#include <cstdlib>
#include "buffonNeedle.h"
using namespace std;

Needles::Needles() {
	cout << "Please enter how far apart in inches our parallel boards will be (must be greater than 0): ";
	cin >> distanceOfBoards;
	cout << endl;

	while (distanceOfBoards <= 0) {
		cout << "Please enter a valid distance in inches (greater than 0): ";
		cin >> distanceOfBoards;
		cout << endl;
	}

	cout << "Please enter how long the needles will be in inches (must be greater than 0 and less than or equal to " << distanceOfBoards << "): ";
	cin >> length;
	cout << endl;

	while (length <= 0 || length > distanceOfBoards) {
		cout << "Please enter a valid distance in inches (greater than 0 and less than or equal to " << distanceOfBoards << "): ";
		cin >> length;
		cout << endl;
	}

	cout << "Enter how many needles do you want to drop (must be greater than 0): ";
	cin >> numOfNeedles;
	cout << endl;

	while (numOfNeedles <= 0) {
		cout << "Please enter a valid number of needles (greater than 0): ";
		cin >> numOfNeedles;
		cout << endl;
	}
}

float Needles::probabilityOfIntersection() {
	//P = 2L/piD, where l is the length of the needle ... pi is pi ... d is the distance between the parallel lines.

	float probability = (2.0 * length) / (PI * distanceOfBoards);

	cout << "The probability that one of your dropped needles will intersect a parallel line is ... " << probability * 100 << "% chance!\n" << endl;

	return probability;
}

void Needles::dropNeedles(const float probabilityOfIntersection) {
	cout << "DROPPING " << numOfNeedles << " needles!" << endl;

	for (int i = 0;i < numOfNeedles;i++) {
		float ranFloat = static_cast<float>(rand()) / RAND_MAX;

		if (ranFloat <= probabilityOfIntersection){
			needlesIntersected++;
		}
	}

	cout << needlesIntersected << " needles intersected the lines!\n" << endl;

}

float Needles::piCalculator() {
	cout << "\n***Lets Calculate Pi With Your Numbers***\n" << endl;
	cout << "The chance that one of your needles intersected was " << ((needlesIntersected / numOfNeedles) * 100) << "%!" << endl;

	//pi = 2nL/xD, where n = the number of needles thrown ... L = the length of the needle... x = needles that intersected a line ... D = the distance between the boards.

	float newPi = ((2 * numOfNeedles * length) / (needlesIntersected * distanceOfBoards));

	return newPi;  
}