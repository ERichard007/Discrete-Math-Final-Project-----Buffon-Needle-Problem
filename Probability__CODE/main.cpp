#include <iostream>
#include <cstdlib>
#include <time.h>
#include "buffonNeedle.h"
using namespace std;

int main() {
	srand(time(0));

	/*INTRODUCTION*/
	cout << "Welcome to Buffon's Needle Probability!\nLets get started.\n\n\n*******************" << endl;

	bool keepPlaying = true;
	while (keepPlaying) {

		/*DROPPING NEEDLES*/
		Needles newNeedles;

		float probabilityToIntersect = newNeedles.probabilityOfIntersection();
		
		cout << "***LETS DROP THE NEEDLES!***\n\n";

		newNeedles.dropNeedles(probabilityToIntersect);

		float calculatedPi = newNeedles.piCalculator(); 

		cout << "Your estimated pi with these numbers is: " << calculatedPi << "!" << endl;
		cout << "Which has a percent error of " << abs(((calculatedPi - PI) / PI) * 100) << "%!" << endl; // percent error calculation!

		/*PLAY AGAIN PROMPT*/
		char playAgain;
		cout << "Would you like to keep playing? (Y/N): ";
		cin >> playAgain;
		cout << endl;

		if (playAgain != 'y' && playAgain != 'Y') { 
			keepPlaying = false;
		}
	}

	
	return 0;
}