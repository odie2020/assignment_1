#include <iostream>
using namespace std;


int main ( )
{
	//Declaring the variables that we will be using
	double metricTons = 35273.92;
	double ounces, boxes;
	double weight;
	double numberOfBoxes;

	//Prompts the user and for an input
	cout << "Please enter the weight of a package of breakfast cereal in ounces: ";
	cin >> ounces;

	//Calculates the weight in metric tons
	weight = ounces/metricTons;
	cout << "The weight of the cereal in metric tons is: "<< weight << endl;

	//Calculates the the number of boxes that you need for one
	//metric ton of cereal
	numberOfBoxes = metricTons/ounces;
	cout << "The number of boxes of cereal that will hold one ton: " << numberOfBoxes << endl;

	return 0;
}
