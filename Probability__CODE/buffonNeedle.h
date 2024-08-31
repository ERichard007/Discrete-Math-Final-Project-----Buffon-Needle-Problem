#include <iostream>
#include <cmath>
using namespace std;


#ifndef BUFFONEEDLE_H
#define BUFFONEEDLE_H

const long double PI = atan(1.0) * 4;

/* CLASS DOCUMENTATION ****************************************************************************/
/*

**Member Function: void dropNeedles(const float probabilityOfIntersection);
Gen: will "drop" the Needles onto the parallel boards
Pre: Must have already calculated the probability that a needle will intersect a line via probabilityOfIntersection();
Post: will iterate the number of times the needle intersected the boards through probability.

**Member Function: float probabilityOfIntersection();
Gen: will get the probability that a single needle will intersect a parallel board.
Pre: NONE
Post: will return the probability that a needle intersect a parallel board as a float (NOT IN PERCENTAGE FORM)

**Member Function: float piCalculator();
Gen: will calculate PI using the information gathered from other funcitons.
Pre: Must have calculated probability already and dropped the needles.
Post: Will return the estimated PI!

**Constructor: Needles();
Gen: Creates a new bundle of needles!
Pre: NONE
Post: Will change the value of needle lengths, number of needles, and distance between boards according to the player's choice

*/
/* CLASS DEFINITION *******************************************************************************/

class Needles {
public:
	
	/*MEMBER FUNCTIONS*/
	void dropNeedles(const float probabilityOfIntersection);

	float probabilityOfIntersection(); 

	float piCalculator();

	/*CONSTRUCTORS*/
	Needles();

private:
	/*MEMBER VARIABLES*/
	float length;
	float distanceOfBoards;
	float numOfNeedles;

	float needlesIntersected = 0;
};

#endif 

