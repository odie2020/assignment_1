#include <iostream>
using namespace std;

int main()
{
//Declaring the variables that we will be using
int maxNumber;
int numPeople;
int difference;

//Prompts the user for an input
cout << "What is the maximum room capacity? ";
//Assigns their answer to a variable
cin >> maxNumber;
cout << "How many people are going to be in the room? ";
cin >> numPeople;

//Creates an if statement to see if the number of people exceeds the number of people allowed
if(numPeople > maxNumber){
//The difference finds the amount of people that need to leave
difference = numPeople - maxNumber;
cout << "Sorry, the meeting cannot be held due to the fire regulations. " << difference << " people should be excluded." << endl;
}
//If the number of people is less than or equal to the maximum capacity, then is says the meeting is legal
else if(numPeople <= maxNumber){
difference = maxNumber - numPeople;
cout << "It is legal to hold the meeting. " << difference << " more people are allowed to attend." << endl;
}

return 0;
}
