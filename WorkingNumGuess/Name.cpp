#include <iostream>


int main()
{
	std::cout << "Think of any number from 1 to 25" << std::endl;
	std::cout << "Press any key to continue" << std::endl;
	std::cin;

	// The lowest number the program can guess
	int min = 0;

	int numbers[25]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24 ,15 };

	// The max Number the program can guess
	int max = 25;

	bool correct = false;


	while (min <= max)
	{
		// auto sets the bool correct to false
		correct = false;

		// Gets the the middle of all numbers and displays as first guess to easily tell higher or lower
		int guess = (min + max) / 2;

		std::cout << "Is this your number: " << std::endl;
		std::cout << guess << std::endl;
		std::cout << "press 1 for yes and 0 for no" << std::endl;


		int Playeranswer = 0;

		//Gets the players input to tell whether its the correct number
		std::cin >> Playeranswer;

		// If player says the number was correct the guess is returned and correct bool is set to true.
		if (Playeranswer == 1)
		{
			correct == true;
			return guess;

		}

		// If the playe answers no the program will ask if the player's number is higher or lower
		else if (Playeranswer == 0)
		{
			//The player tells the computer if the number is higher or lower than the guess made!
			std::cout << "Is your answer higher or lower?" << std::endl;
			std::cout << "press 1 for higher and 0 for lower" << std::endl;

			std::cin >> Playeranswer;

			// Makes the min amount of numbers lower making the program to guess higher numbers and ignore lower ones
			if (Playeranswer == 1)
			{
				min = guess + 1;
			}

			// Lowers the max so the program sets a border of the wrong guess and guesses lower
			if (Playeranswer == 0)
			{
				max = guess - 1;
			}
		}

	}

	// If the player claims the program has chosen the right number this is the output 
	if (correct == true)
	{

		std::cout << "Another guessed number!" << std::endl;
		std::cin;
	}

	// If the player changes their number or tries to cheat the program will return false and use this if statement instead
	else if (correct == false)
	{

		std::cout << " I doubt you are being a fair player!";
		std::cin;
	}
	std::cin;
	return 0;
}