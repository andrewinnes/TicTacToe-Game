#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<char>grid{'\x00','\x00','\x00','\x00','\x00','\x00','\x00','\x00','\x00' };
std::string input = "";
bool restart = true;
bool result = false;
bool gameEnd = false;
bool gameDraw = false;
int compChoice = 0;

//winning combinations
// 012,345,678,036,741,258,642,048



void printGridString() {

	for (int i = 0; i < grid.size(); i++) {

		std::cout << grid[i];
	}

	std::cout << "\n";
}

void startGame(){

	std::cout << "Welcome to TicTacToe! You will play first.\nHeres the grid:\n";
}

void displayGrid() {

	std::cout << "   |  1  |  2  |  3\n";
	std::cout << "A  |  " << grid[0] << "  |  " << grid[1] << "  |  " << grid[2] << "\n";
	std::cout << "B  |  " << grid[3] << "  |  " << grid[4] << "  |  " << grid[5] << "\n";
	std::cout << "C  |  " << grid[6] << "  |  " << grid[7] << "  |  " << grid[8] << "\n";

}

std::string playerInput() {

	result = false;
	std::cout << "Please pick a grid point (eg A1)\n";
	std::cin >> input;
	return input;

}

bool checkPlayerInput(std::string input) {

	if (input == "A1") {

		if (grid[0] == 'X' || grid[0] == 'O') {

			std::cout << "That is already taken please pick another grid point.\n";
			result = false;
			return result;


		}

		else {

			
			grid.erase(grid.begin());
			grid.resize(9);
			grid.insert(grid.begin(), 'X');
			result = true;
			return result;

		}

	}

	else if (input == "A2") {

			if (grid[1] == 'X' || grid [1] == 'O') {

				std::cout << "That is already taken please pick another grid point.\n";
				result = false;
				return result;


			}

			else {

				grid.erase(grid.begin()+1);
				grid.resize(9);
				grid.insert(grid.begin() + 1, 'X');
				result = true;
				return result;

			}

	}

	else if (input == "A3") {

			if (grid[2] == 'X' ||grid[2]== 'O') {

				std::cout << "That is already taken please pick another grid point.\n";
				result = false;
				return result;


			}

			else {

				grid.erase(grid.begin() + 2);
				grid.resize(9);
				grid.insert(grid.begin() + 2, 'X');
				result = true;
				return result;

			}

		

	}

	else if (input == "B1") {

		if (grid[3] == 'X' || grid[3] == 'O') {

			std::cout << "That is already taken please pick another grid point.\n";
			result = false;
			return result;


		}

		else {

			grid.erase(grid.begin() + 3);
			grid.resize(9);
			grid.insert(grid.begin() + 3, 'X');
			result = true;
			return result;

		}



	}

	else if (input == "B2") {

		if (grid[4] == 'X' ||grid[4]== 'O') {

			std::cout << "That is already taken please pick another grid point.\n";
			result = false;
			return result;


		}

		else {

			grid.erase(grid.begin() + 4);
			grid.resize(9);
			grid.insert(grid.begin() + 4, 'X');
			result = true;
			return result;

		}



	}

	else if (input == "B3") {

	if (grid[5] == 'X' || grid[5] == 'O') {

		std::cout << "That is already taken please pick another grid point.\n";
		result = false;
		return result;


	}

	else {

		grid.erase(grid.begin() + 5);
		grid.resize(9);
		grid.insert(grid.begin() + 5, 'X');
		result = true;
		return result;

	}



	}

	else if (input == "C1") {

	if (grid[6] == 'X' || grid[6] == 'O') {

		std::cout << "That is already taken please pick another grid point.\n";
		result = false;
		return result;


	}

	else {

		grid.erase(grid.begin() + 6);
		grid.resize(9);
		grid.insert(grid.begin() + 6, 'X');
		result = true;
		return result;

	}



	}

	else if (input == "C2") {

	if (grid[7] == 'X' || grid[7] == 'O') {

		std::cout << "That is already taken please pick another grid point.\n";
		result = false;
		return result;


	}

	else {

		grid.erase(grid.begin() + 7);
		grid.resize(9);
		grid.insert(grid.begin() + 7, 'X');
		result = true;
		return result;

	}



	}

	else if (input == "C3") {

	if (grid[8] == 'X' || grid[8] == 'O') {

		std::cout << "That is already taken please pick another grid point.\n";
		result = false;
		return result;


	}

	else {

		grid.erase(grid.begin()+8);
		grid.resize(9);
		grid.insert(grid.begin()+8, 'X');
		result = true;
		return result;

	}



	}

	else {

	std::cout << "Invalid input, need a grid coordinate (eg A1 or B3). Try again:\n";
	result = false;
	return result;
}

}

int computerInput() {

	result = false;
	compChoice = rand() % 9;
	return compChoice;

}

bool checkComputerInput(int compChoice) {

	if (compChoice == 0 ) {

		if (grid[0] == 'X' || grid[0] == 'O') {

			result = false;
			return result;


		}

		else {

			grid.erase(grid.begin());
			grid.resize(9);
			grid.insert(grid.begin(), 'O');
			result = true;
			return result;

		}

	}

	else if (compChoice == 1) {

		if (grid[1] == 'X' || grid[1] == 'O') {

			result = false;
			return result;


		}

		else {

			grid.erase(grid.begin() + 1);
			grid.resize(9);
			grid.insert(grid.begin() + 1, 'O');
			result = true;
			return result;

		}

	}

	else if (compChoice == 2) {

		if (grid[2] == 'X' || grid[2] == 'O') {

			result = false;
			return result;


		}

		else {

			grid.erase(grid.begin() + 2);
			grid.resize(9);
			grid.insert(grid.begin() + 2, 'O');
			result = true;
			return result;

		}



	}

	else if (compChoice == 3) {

		if (grid[3] == 'X' || grid[3] == 'O') {

			result = false;
			return result;


		}

		else {

			grid.erase(grid.begin() + 3);
			grid.resize(9);
			grid.insert(grid.begin() + 3, 'O');
			result = true;
			return result;

		}



	}

	else if (compChoice == 4) {

		if (grid[4] == 'X' || grid[4] == 'O') {

			result = false;
			return result;


		}

		else {

			grid.erase(grid.begin() + 4);
			grid.resize(9);
			grid.insert(grid.begin() + 4, 'O');
			result = true;
			return result;

		}



	}

	else if (compChoice == 5) {

		if (grid[5] == 'X' || grid[5] == 'O') {

			result = false;
			return result;


		}

		else {

			grid.erase(grid.begin() + 5);
			grid.resize(9);
			grid.insert(grid.begin() + 5, 'O');
			result = true;
			return result;

		}



	}

	else if (compChoice == 6) {

		if (grid[6] == 'X' || grid[6] == 'O') {

			result = false;
			return result;


		}

		else {

			grid.erase(grid.begin() + 6);
			grid.resize(9);
			grid.insert(grid.begin() + 6, 'O');
			result = true;
			return result;

		}



	}

	else if (compChoice == 7) {

		if (grid[7] == 'X' || grid[7] == 'O') {

			result = false;
			return result;


		}

		else {

			grid.erase(grid.begin() + 7);
			grid.resize(9);
			grid.insert(grid.begin() + 7, 'O');
			result = true;
			return result;

		}



	}

	else if (compChoice == 8) {

		if (grid[8] == 'X' || grid[8] == 'O') {

			result = false;
			return result;


		}

		else {

			grid.erase(grid.begin()+8);
			grid.resize(9);
			grid.insert(grid.begin()+8, 'O');
			result = true;
			return result;

		}



	}

	else {

		result = false;
		return result;
	}

}


bool checkGridState() {
	
	std::cout << "checking gamestate\n";

	if (grid[0]=='X'&&grid[1]=='X'&&grid[2]=='X'){
	
		gameEnd = true;
		return gameEnd;
	}
	else if (grid[3] == 'X' && grid[4] == 'X' && grid[5] == 'X') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[7] == 'X' && grid[8] == 'X' && grid[6] == 'X') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[0] == 'X' && grid[3] == 'X' && grid[6] == 'X') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[7] == 'X' && grid[4] == 'X' && grid[1] == 'X') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[2] == 'X' && grid[5] == 'X' && grid[8]== 'X') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[6] == 'X' && grid[4] == 'X' && grid[2] == 'X') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[0] == 'X' && grid[4] == 'X' && grid[8] == 'X') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[0] == 'O' && grid[1] == 'O' && grid[2] == 'O') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[3] == 'O' && grid[4] == 'O' && grid[5] == 'O') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[6] == 'O' && grid[7] == 'O' && grid[8] == 'O') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[0] == 'O' && grid[3] == 'O' && grid[6] == 'O') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[7] == 'O' && grid[4] == 'O' && grid[1] == 'O') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[2] == 'O' && grid[5] == 'O' && grid[8] == 'O') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[6] == 'O' && grid[4] == 'O' && grid[2] == 'O') {

		gameEnd = true;
		return gameEnd;
	}
	else if (grid[0] == 'O' && grid[4] == 'O' && grid[8] == 'O') {

		gameEnd = true;
		return gameEnd;
	}
	else {

		gameEnd = false;
		return gameEnd;
	}

}

bool drawCheck() {

	int check = std::count(grid.begin(), grid.end(), '\x00') - 1;
	if (check < 1) {

		gameDraw = true;
		return gameDraw;

	}

	else {

		gameDraw = false;
		return gameDraw;

	}
	
		
}

bool restartGame() {

	char choice='y';
	std::cin >> choice;

	if (choice == 'y') {

		restart = true;
		return restart;

	}

	
	else if(choice == 'n') {
	
		restart = false;
		return restart;


	}

	else {

		std::cout << "Invalid input. Exiting game.\n";
		restart = false;
		return restart;
	}

	

}