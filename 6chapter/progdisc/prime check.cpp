// prime check.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
	int input = 0;
	// prompt for a positive number untill one is recieved
	do {
		cout << "Please enter a positive integer: ";
		cin >> input;
	} while (isdigit(input) && input <= 0);

	// start prime out as true and the first divisoor to check as 3
	bool prime = true;
	int i = 3;


	if (input == 2) prime = true; // if input is 2 then keep prime set to true
	else if (input % 2 == 0) prime = false; // if input is otherwise even set prime to false
	else { // check input for factors
		while (prime && i <= sqrt(input)) { // run untill number is determined not prime or all possible factors exhausted
			if (input % i == 0) prime = false;
			else i += 2;
		}
	}

	// print the results
	if (prime) cout << input << " is prime!" << endl;
	else cout << input << " is composite." << endl;

	//	system("Pause");
}
