bool isWin(char game[3][3]){
     // row
     if (game[0][0] == game[0][1] && game[0][1] == game[0][2]) return true;
	if (game[1][0] == game[1][1] && game[1][1] == game[1][2]) return true;
	if (game[2][0] == game[2][1] && game[2][1] == game[2][2]) return true;
	// column
	if (game[0][0] == game[1][0] && game[1][0] == game[2][0]) return true;
	if (game[0][1] == game[1][1] && game[1][1] == game[2][1]) return true;
	if (game[0][2] == game[1][2] && game[1][2] == game[2][2]) return true;
	// diagonal
	if (game[0][0] == game[1][1] && game[1][1] == game[2][2) return true;
	if (game[0][2] == game[1][1] && game[1][1] == game[2][0]) return true;
	return false;
}

int main(){
	int i, j;
	char game[3][3] = {' '}; // Tic-tac-toe
	// char player1 = 'X';
	// char player2 = 'O';
	bool turn = true; // false for player 1's turn, true for player 2's turn. Player 1 first.
	cout << "X = Player 1" << endl << "O = Player 2" << endl;
	for (int n=0; n<9; n++){
			turn = !turn;  // use the not-operator to change true to false or false to true.
			if (turn == false)
				cout << "Player 1: ";
			else
				cout << "Player 2: ";
			cout << "Which cell to mark? i:[0..2], j:[0..2]: ";
			cin >> i >> j;
		        if(i>=0&& i<=2&&j>=0&&j<=2)
			{
			if (turn == false)
				game[i][j] = 'X';
			else 
				game[i][j] = 'O';
			}
			if (isWin(game)){
				cout << turn?"Player 2":"Player 1" << " Won!" << endl;
				break; // need to terminate the problem
			} else if (n == 8){
                cout << "Tie!" << endl;
                break;
              }
              else{
                printingResult(game);             
              }
		}
	// show the game to console
     printingResult(game);
	return 0;
}

void printingResult (char game[3][3]){
    cout<< game[0][0]<< " " << game[0][1] << " " << game[0][2]<< endl;
    cout<< game[1][0]<< " " << game[1][1] << " " << game[1][2]<< endl;
    cout<< game[2][0]<< " " << game[2][1] << " " << game[2][2]<< endl;
}















