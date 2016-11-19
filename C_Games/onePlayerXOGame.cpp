#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const char X = 'X';
const char O = 'O';
const char EMPTY = '-';

bool haveEmptyCells(const vector<char>&);
bool canChange(const vector<char>&, int);
void showBoard(const vector<char>&);
char checkWin( const vector<char>&, char&);
inline bool isDigit(char);
void makeMove(vector<char>&, char);

int main()
{
	cout << "Choose a cell\n"
		<< "0 | 1 | 2\n"
		<< "3 | 4 | 5\n"
		<< "6 | 7 | 8\n";

	vector<char> board = vector<char>(9,EMPTY);

	while(haveEmptyCells(board))
	{
		makeMove(board, X);
	}

	return 0;

}

bool haveEmptyCells(const vector<char>& board)
{
	for(unsigned int i=0;i<board.size();i++){
		if(board[i] == EMPTY){
			return true;
		}
	}

	return false;

}

bool canChange(const vector<char>& board, int cell)
{
	if(board[cell] == EMPTY){
		return true;
	}
	else
	{
		return false;
	}
}

void showBoard(const vector<char>& board)
{
	for(unsigned int i=0; i< board.size();i++)
	{
		if(i % 3 == 0)
		{
			cout << '\n';
		}
		cout << board[i];
	}
	cout << '\n';

}

char checkWin( const vector<char>& board, char& playerChar)
{
	if(
		(board[0] == playerChar && board[1] == playerChar && board[2] == playerChar)
		|| (board[0] == playerChar && board[1] == playerChar && board[2] == playerChar)
		|| (board[3] == playerChar && board[4] == playerChar && board[5] == playerChar)
		|| (board[6] == playerChar && board[7] == playerChar && board[8] == playerChar)
		|| (board[0] == playerChar && board[3] == playerChar && board[6] == playerChar)
		|| (board[1] == playerChar && board[4] == playerChar && board[5] == playerChar)
		|| (board[2] == playerChar && board[5] == playerChar && board[8] == playerChar)
		|| (board[0] == playerChar && board[4] == playerChar && board[8] == playerChar)
		|| (board[2] == playerChar && board[4] == playerChar && board[6] == playerChar)
	)
	{
		return playerChar;
	}

	return EMPTY;

}

inline bool isDigit( char checkedChar )
{
	return ( '0' <= checkedChar && checkedChar <= '8' );
}

void makeMove(vector<char>& board, char playerChar)
{

	showBoard(board);

	char checkedChar;
	cout << "\nwrite a number of cell\n";
	cin.clear();
	cin >> checkedChar;
	if(isDigit(checkedChar))// if char is a digit from 0 to 8
	{
		int cell = int(checkedChar) - 48;

		if(canChange(board, cell)){
			board[cell] = playerChar;
			if(checkWin(board, playerChar) != EMPTY){
				cout << "Congratulations!\nWe have a winner!!!!"
					<< "it's a player with '" << playerChar << "' symbol";
			}
		}
		else
		{
			makeMove(board, playerChar);
		}
	}
	else
	{
		makeMove(board, playerChar);
	}

}
