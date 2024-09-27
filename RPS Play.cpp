#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

string Computer() {

	int ComputerGuess;

	ComputerGuess = rand() % 3;

	if (ComputerGuess == 2) {
		return "Rock";
	}
	if (ComputerGuess == 1) {
		return "Paper";
	}
	if (ComputerGuess == 0) {
		return "Scissors";
	}
}

int Results(string Player, string Computer) {

	if (Player == Computer) {
		return 0;
	}
	if (Player == "Rock" && Computer == "Scissors") {
		return 1;
	}
	if (Player == "Rock" && Computer == "Paper") {
		return 2;
	}
	if (Player == "Paper" && Computer == "Rock") {
		return 1;
	}
	if (Player == "Paper" && Computer == "Scissors") {
		return 2;
	}
	if (Player == "Scissors" && Computer == "Paper") {
		return 1;
	}
	if (Player == "Scissors" && Computer == "Rock") {
		return 2;
	}
}

int main() {

	string Player;

	cout << "Let´s play Rock, Paper and Scissors!\n";

	while (Player != "Exit") {

		cout << "Type Rock, Paper or Scissors! (Type Exit to stop.)\n\n";
		cin >> Player;
		string Comp = Computer();
		int Resul = Results(Player, Comp);

		if (Player == "Rock" || Player == "Paper" || Player == "Scissors") {

			cout << Comp << "\n";
			cout << "Its a...";

			if (Resul == 0) {
				cout << "Draw" << "\n\n";
			}
			if (Resul == 1) {
				cout << "Win" << "\n\n";
			}
			if (Resul == 2) {
				cout << "loss" << "\n\n";
			}
		}
		else if (Player == "Exit") {
			return 0;
		}
		else {
			cout << "Invalid input.\n\n";
		}

	}
	return 0;
}