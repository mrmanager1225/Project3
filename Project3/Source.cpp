#include <iostream>
using namespace std;

double g = 9.8; // gravity
int x; // user input
double f; // distance fallen
int s; //seconds
double distance(int a)
{
	double x;
	x = g * (a*a) / 2;
		return x;
}


void main()
{
	cout << "Enter the initial height of the tower in meters:";

	cin >> x;
	cout << endl;
	cout << "At 0 seconds, the ball is at height:" << x << " meters \n";
		
	cout << "At 1 seconds, the ball is at height:" << x - distance (1) << " meters \n";
	
	cout << "At 2 seconds, the ball is at height:" << x - distance (2) << " meters \n";
	
	cout << "At 3 seconds, the ball is at height:" << x  - distance (3)<< " meters \n";
	
	cout << "At 4 seconds, the ball is at height:" << x - distance (4) << " meters \n";
	
	cout << "At 5 seconds, the ball is on the ground";

#include "pause.h"
}