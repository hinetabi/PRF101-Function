#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	bool retry = true;
	while (retry)
	{
		int RandomNumber = rand();
		int Number = RandomNumber % 100 + 1;
		cout << "	Welcome to Guess My Number\n";
		int InputNumber;
		unsigned int counts = 0;
		unsigned int guessleft = 10;
		string gameover;
		cout << "You Have " << guessleft << " guess \nEnter a guess: ";
		cin >> InputNumber;
		// loop enter guess
		while (InputNumber != Number && guessleft > 1)
		{
			if (InputNumber < Number)
			{
				cout << "Too low!\n\n";
				counts++;
				guessleft--;
				cout << "You Have " << guessleft << " guess \nEnter a guess: ";
				cin >> InputNumber;
			}
			else
			{
				cout << "Too high!\n\n";
				counts++;
				guessleft--;
				cout << "You Have " << guessleft << " guess \nEnter a guess: ";
				cin >> InputNumber;
			}
		}
		if (guessleft == 1)
		{
			cout << "Sorry the number is: " << Number;
		}
		if (InputNumber == Number)
		{
			cout << "That's it! You got it in " << counts + 1;
			if (counts + 1 > 1)
			{
				cout << " guesses!";
			}
			else
			{
				cout << " guess!";
			}
		}
		// retry game
		cout << "\nWhat an exciting game!!!\nDo you wanna play again?(y/n)";
		cin >> gameover;
		if (gameover != "y")
		{
			while (gameover != "n" && gameover != "y") {
				cout << "Invalid Key!!!\nDo you wanna play again?";
				cin >> gameover;
			}
			if (gameover == "n") {
				cout << "See you again";
				retry = false;
			}
		}
		else
		{
			cout << "Good luck this time!!!\n\n";
		}
	}
	return 0;
}
