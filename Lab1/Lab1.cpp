// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
 
int main()
{
	int computersNumber;
	int playersGuess;
	int count = 0;
    std::cout << "Guess the number!\n"; 
	std::cout << "You have five chances to get the correct awnser.!\n";
	/* generate secret number between 1 and 10: */
	computersNumber = rand() % 10 + 1;
	do {
		printf("Guess the number (1 to 10): ");
		std::cin >> playersGuess;
		if (computersNumber < playersGuess)
			puts("The secret number is lower");
			//something else here
		
		else if (computersNumber > playersGuess) 
			puts("The secret number is higher");
		count++;

	} while (computersNumber != playersGuess);
	std::cout << "Congratulations you guessed the number " << count << " times for correct answer" << std::endl;
	

	

	return 0;


}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
