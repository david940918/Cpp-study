#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>
#include <fstream>

// before refactoring, do some pretty simple test.
void save_score(int guess_count)
{
	std::ifstream input("best_score.txt");

	if (!input.is_open())
	{
		std::cout << "unable to read file" << std::endl;
		return;
	}

	int best_score;
	input >> best_score;

	std::ofstream output("best_score.txt");
	if (guess_count < best_score)
	{
		output << guess_count;
	}
	else
	{
		output << best_score;
	}
}

void print_vector(std::vector<int> vector)
{
	for (int i = 0; i < vector.size(); i++)
	{
		std::cout << vector[i] << "\t";
	}
	std::cout << std::endl;
}

void play_game() 
{
	std::vector<int> guesses;
	int count = 0;

	int random = rand() % 251;
	std::cout << random << std::endl;
	std::cout << "Guess a number: ";

	while (true) {

		int guess;
		std::cin >> guess;
		count++;

		guesses.push_back(guess);

		if (guess == random) {
			std::cout << "You win!" << std::endl;
			break;
		}
		else if (guess < random) {
			std::cout << "Too low" << std::endl;
		}
		else {
			std::cout << "Too high" << std::endl;
		}
	}
	
	save_score(count);
	print_vector(guesses);
}

int main() {

	srand(time(NULL));
	int choice;

	do {
		std::cout << "0. Quit" << std::endl << "1. Play Game" << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 0:
			std::cout << "Thanks for nothing" << std::endl;
			return 0;

		case 1:
			play_game();
			break;
		}
	} while (choice != 0);
}