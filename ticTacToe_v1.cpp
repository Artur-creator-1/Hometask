#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>

char board[9] = {};

using namespace std;

void clearBoard();
void printGameBoard();
bool checkEndGame(char player);
void printChangeGameBoard();
int getUserMove();
char getResultGame();
int getComputerMove();

int main()
{								 		
	string reply = "y";
	int x_wins = 0, o_wins = 0, tie = 0;
	
	while (reply == "y"){
		clearBoard();
		char winner = getResultGame();
		printChangeGameBoard();
		
		switch(winner){
			case 'X':
				x_wins++;
				break;
			case '0':
				o_wins++;
				break;
			case 'D':
				tie++;
		}
		
		cout << endl;
		cout << "Winner statistics:" << endl;
		cout << "Player = " << x_wins << "\tComputer = " << o_wins << "\ttie = " << tie << endl;
		
		cout << "Would you like play again? (y / n)" << endl;
		cin >> reply;
	}
	
	while (reply != "y" && reply != "n"){
		cout << "Please, input yes(y), or no(n): " << endl;
		cin >> reply;
	}

	
	return 0;
}

void clearBoard()
{
	for (int i = 0; i < 9; i++){
		board[i] = '-';
	}
}

void printGameBoard()
{
	cout << "Scheme game board:" << endl;
	cout << "-7-|-8-|-9-"<< endl;
	cout << "-4-|-5-|-6-"<< endl;
	cout << "-1-|-2-|-3-"<< endl;
}

bool checkEndGame(char player)
{
	int winsCombinations[8][3] = {{0,1,2}, {3,4,5}, {6,7,8}, {0,3,6},
							  	  {1,4,7}, {2,5,8}, {0,4,8}, {2,4,6}};
							  
	for (int i = 0; i < 8; i++){
		int count = 0;
		
		for (int j = 0; j < 3; j++){
			if (board[winsCombinations[i][j]] == player){
				count++;
			}
		}
		if (count == 3){
			return true;
		}
	}
	return false;
}

void printChangeGameBoard()
{
	cout << "Game board:" << endl;
	cout << "-" << board[6] << "-|-" << board[7] << "-|-" << board[8] << "-" << endl;
	cout << "-" << board[3] << "-|-" << board[4] << "-|-" << board[5] << "-" << endl;
	cout << "-" << board[0] << "-|-" << board[1] << "-|-" << board[2] << "-" << endl;
}

int getUserMove()
{
	printGameBoard();
	cout << endl;
	printChangeGameBoard();
	cout << endl;
	
	int userMove = 0;

	cout << "Your choice: " << endl;
	cin >> userMove;
	cout << endl;
	
	while (userMove > 9 || userMove < 1 || board[userMove - 1] != '-'){
		cout << "Input value [1..9]" << endl;
		cin >> userMove;
	}
	board[userMove - 1] = 'X';
	
	return userMove;
}

char getResultGame()
{
	int turn = 1;
	
	while (!checkEndGame('X') && !checkEndGame('0')){
		system("cls");
		int move = getUserMove();
		int move1 = getComputerMove();
		
		if (turn % 2 == 1){
			board[move - 1] = 'X';
			if (checkEndGame('X')){
				cout << "Player win!" << endl;
				
				return 'X';
			}
		}
		else{
			board[move1 - 1] = '0';
			if (checkEndGame('0')){
				cout << "Computer win!" << endl;
				
				return '0';
			}
		}
		turn++;
		if (turn == 10){
			cout << "Tie!" << endl;
			
			return 'D';
		}
	}
}

int getComputerMove()
{	
	int computerMove = 0;
	
	while (computerMove > 9 || computerMove < 1 || board[computerMove - 1] != '-'){
		computerMove = rand() % 11 + 1;
	}
	board[computerMove - 1] = '0';
	
	return computerMove;
}
