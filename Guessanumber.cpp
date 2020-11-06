// Guessanumber.cpp : This file contains the 'main' function. It generates a random number and asks a user to guess that number.
//


#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

int main()
{
	cout << "Welcome to the Guess a Number Game \n"; // Welcome Message
	random_device rd;
	default_random_engine engine(rd());
	uniform_int_distribution<int> uniform_dist(1, 100); // generate the random number
	
	int number = uniform_dist(engine); // assign the random number to a usable variable
	int attempts; // this is the 'counter'
	int input; // the system gets input from the console

	cout << "Enter a number between 1 and 100 \n";
	
	cin >> input;

	for (attempts = 1; attempts < 10; attempts++)
	{
		if (input == number)
		{
			cout << "Great job! \n";
			cout << "You guessed it in " << attempts << " tries. \n";
			break;
		}
		else if (input < number)
		{
			cout << "Too low... guess again. \n";
			cin >> input;
		}
		else if (input > number)
		{
			cout << "Too high... guess again. \n";
			cin >> input;
		}
	}
}



