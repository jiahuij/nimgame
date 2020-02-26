#include<iostream>
#include<string>
#include <ctime>
using namespace std;
//Globle variables.
int  coins = 12, maximum = 3;
int userMove;
string b = "Winner takes the last coin";
string m = "user";

char  y_n = 'y' ;//For the input of the choice of user about who move first
char  w_l = 'w';//For the input od the choice of user about taking last coin as lose or win.
bool win = true;//The result of the game.





void displayMenu(){
	//This function displays menu.
	cout << "*************************************************************************" << endl;
	cout << "*                                 Nim Game                              *" << endl;
	cout << "* 1. Check the nim game rule                                            *" << endl;
	cout << "* 2. Change the number of coins to begin with.                          *" << endl;
	cout << "* 3. Change the maximum number of coins a player can take on each turn  *" << endl;
	cout << "* 4. Decide which player to start the game.                             *" << endl;
	cout << "* 5. Decide the end-game rule                                           *" << endl;
	cout << "*                                                                       *" << endl;
	cout << "*                 Press   0  to start the game                          *" << endl;
	cout << "*                 Press   6  to quit the game                           *" << endl;
	cout << "*                                                                       *" << endl;
	cout << "*************************************************************************" << endl;
	cout << "                         Game setting                                    " << endl;
	cout << "    Starting coins: " << coins << "                                       " << endl;
	cout << "    Maximum number of coins a player can take: " << maximum <<  endl;
	cout << "    Who move first:" << m << endl;
	cout << "    End-game rule:" << b << "                            " << endl;
	cout << "*************************************************************************" << endl;
}


void choice1(){
	//This function simply explained the rules of the game.
	cout << "You and I will take turn to remove a certain number of coins ." << endl;
	cout << "you can decide whether the person takes the last coin winns or losts." << endl;
	cout << "You can alse decide the number of coins to start with." << endl;
	cout << "You can change the maximum number of coins a player can take each turn." << endl;
	cout << " Show me that your math is better than mine. " << endl;
	cout << "                       Enjoy the game:)  " << endl;

}

void choice2(){
	//This function helps the user to change the number of coins to start with.
	cout << "What is the number of coins thta you want to start with ?" << endl;
	cin >> coins;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}
void choice3(){
	//This function helps the user to change the maximum number of coins a player can take.

	//The max can't be 0.
	bool not_0 =true;

	while (not_0){

		cout << "What is the maximum number of  coins a player can take?" << endl;
		cin >> maximum;

		if (maximum == 0){
			cout << "maximum can't be 0" << endl;
		}
		else

			not_0 = false;

		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
	}
}
void choice4(){
	//This function asks the user if he wants to move first.

	bool check = true;
	//For checking the invalidity of the input

	while (check){

		cout << "Do you want to start first ? " << endl;
		cout << "y = yes                n = no " << endl;
		cin >> y_n;

		if (y_n == 'y'){ //If user wants to start first, store the string "user "in "m" which will be display on the menu
			m = "user    ";
			check = false;
		}
		else if (y_n == 'n'){ //If user doesn't wants to start first, store the string "computer" in "m" which will be display on the menu
			m = "computer";
			check = false;
		}
		else{//else it is a invalid input.
			cout << "Invalid choice. Please enter y as yes or n as no." << endl;
			cout << endl;
			cout << endl;
		}
	}
	 cout << endl;
	 cout << endl;
	 cout << endl;
	 cout << endl;
	 cout << endl;
	 cout << endl;
	 cout << endl;
	 cout << endl;
	 cout << endl;
	 cout << endl;
	 cout << endl;
	 cout << endl;
	
}
void choice5(){
	//This function asks the user if he wants the one who takes the last coin to be winner or loser.

	bool correct = true;
	//For the checking of the invalidity of user input

	while (correct){


		cout << "You want the one who takes the last coin to be the winner or loser ? " << endl;
		cout << "w = winner                     l = loser  " << endl;
		cin >> w_l;

		if (w_l == 'w'){//If user wants the one who takes the last coin to be winner
			            //store "Winner takes the last coin" in "b"which will be display on the menu.

			b = "Winner takes the last coin";
			correct = false;
		}
		else if (w_l == 'l'){//If user wants the one who takes the last coin to be loser
			            //store "loser takes the last coin" in "b" which will be display on the menu.

			b = "loser takes the last coin";
			correct = false;
		}
		else//else it is an invalid input
			cout << "Invalid choice. Please enter w as winner or l as loser." << endl;
		cout << endl;
		cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}

void computer_Move_For_Winner_Takes_The_Last_Coin(){
	//This function takes the responsibility for the computer move when winner is the one who takes the last coin.

	if (coins == 0){//If the coins have all be taken by the user before computer move, it means you won the game and so set the game resul as true.
		win = false;
	}


	/* If when it is computer's turn and the number of coins remain is dividable by the maximum number of coins you can take  plus one,
	the computer is in a losing situation. For example, if there are 3 coins left and the maximum is 2,no matter how many coins computer takes, you will
	be the one to take the last coin. So what computer can do is just take any number of coins that is allowed. So the winning strategy of this game
	if try to get you opponant into this losing situation.
	*/


	else if ((coins % (maximum + 1) == 0)){
		
		int computerMove = rand() % maximum + 1;
		coins -= computerMove;
		cout << "I have taken " << computerMove << " coins away and there are " << coins << " coins left" << endl;
		cout << "Good job. Seems like there is no optimal move for me" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
	}
	
	
	/* If when it is computer's turn and the number of coins remain is not dividable by the maximum number of coins you can take  plus one,
	the computer is in a winning situation. In this situation, there are several winning moves.
	*/

	else if (!(coins % (maximum + 1) == 0)){

		
		bool flag = true;
		while (flag){
			//checking the valid input

			char goodMove;
			//for storing the usrer choice of having computer making a random move or not.

			cout << "Do you want me to take a random losing move?  Enter 'y' for yes or 'n' for no." << endl;
			cin >> goodMove;

			if (goodMove == 'y'){
				// if choice is yes, nake a random move.
				int computerMove = rand() % maximum + 1;
				coins -= computerMove;
				cout << "I have taken " << computerMove << " coins away and there are " << coins << " coins left" << endl;
				cout << endl;
				cout << endl;
				cout << endl;

				break;
			}


			else if (goodMove == 'n'){
				//if choice is no, make a optimal move.

				//This for loop gives the try of number from 1 - max for each situation.
				for (int i = 1; i <= maximum; i++){

					//If the total coins minuse the number and it forms the winning formula which is  ((coins % (maximum + 1) == 0)),than takes the move.
					if ((coins - i) % (maximum + 1) == 0){

						coins -= i;
						cout << "I have taken " << i << " coins away and there are " << coins << " coins left" << endl;
						cout << endl;
						cout << endl;
						cout << endl;

						if (coins == 0){//If the number of coins = 0 after this move, it mean computer won the game,so set the game result as false.
							cout << "You lost,I got the last coin." << endl;
							win = false;
						}
						break;
					}


					//If the number of coins - the number = 0, take the move.
					else if (coins - i == 0){


						coins -= i;
						cout << "I have taken " << i << " coins away and there are " << coins << " coins left" << endl;

						cout << endl;
						cout << endl;
						cout << endl;
						if (coins == 0){//If the number of coins = 0 after this move, it mean computer won the game,so set the game result as false.
							cout << "You lost,I got the last coin." << endl;
							win = false;
						}
						break;

					}

					//If the number of coins - the max number the is allowed to take = 0, take the move.
					else if (coins - maximum == 0){


						coins -= maximum;
						cout << "I have taken " << maximum << " coins away and there are " << coins << " coins left." << endl;
						cout << endl;
						cout << endl;
						cout << endl;

						if (coins == 0){//If the number of coins = 0 after this move, it mean computer won the game,so set the game result as false.
							cout << "You lost,I got the last coin." << endl;
							win = false;
							break;
						}
						break;
					}


				}
				break;
			}
			else
				cout << "Please enter a valid choice" << endl;
		}
	}
}




void user_Move_For_Winner_Takes_The_Last_Coin(){
	//This function is responsible for the user move when winner is the one that takes the last coin.

	if (coins == 0){//If the coins have all be taken by the computer before user move, it means computer  won the game and so set the game resul as true.
		win = false;
	}


	else{

	bool repet = true;
	//For the checking of invadility of user input.

	while (repet){

		cout << "how many coins do you want to take ?" << endl;
		cin >> userMove;

		if (userMove > maximum || userMove == 0 || userMove > coins){
			//If the user input is greater than the max,or  the user input is =0,or  the user input is greater the number of coins remain,
			//It is a violation.
			cout << "rule violation!" << endl;
		}


		else if (userMove <= maximum){
			//If the input is valid, ask the user if he will take the move that is recommanded.



			/* If when it is user's turn and the number of coins remain is dividable by the maximum number of coins you can take  plus one,
			the user is in a losing situation. For example, if there are 3 coins left and the maximum is 2,no matter how many coins user takes,he will no
			be the one to take the last coin be cause on the pluse one in maximum. */
			if ((coins % (maximum + 1) == 0)){


				cout << "There is no optimal move for you." << endl;
				coins -= userMove;
				cout << "now there are " << coins << " coins left" << endl;
				if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
					cout << "Great job, you won the game ! " << endl;
					win = false;
					break;
				}
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "*************************************************************************" << endl;
				break;
			}


			/* If when it is user's turn and the number of coins remain is not dividable by the maximum number of coins you can take  plus one,
			the user is in a winning situation. For example, if there are 3 coins left and the maximum is 2,no matter how many coins user takes,he will no
			be the one to take the last coin be cause on the pluse one in maximum. */
			else if (!(coins % (maximum + 1) == 0)){


				//This for loop gives the try of number from 1 - max for each situation.
				for (int i = 1; i <= maximum; i++){


					//If the number of coins - the max number the is allowed to take = 0, take the move.
					if (coins - maximum == 0){
						if (userMove == maximum){
							//If the user move is the same as the recommending move,tell the user that it is a optimal move.

							cout << "Your move is optimal" << endl;
							coins -= userMove;
							cout << "now there are " << coins << " coins left" << endl;
							if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
								cout << "Great job, you won the game ! " << endl;
								win = false;
								break;
							}
							cout << endl;
							cout << "*************************************************************************" << endl;
							break;
						}


						else {
							//If uesr move is not optimal, recommand use for the best move.



							bool valid = true;
							//Checking the valid input.

							while (valid){

								char best;
								//To store the user choice of taking recommending move or not


								cout << "The best move could be : " << maximum << endl;
								cout << "Do you want to take this move ?  Enter 'y' for yes or 'n' for no." << endl;
								cin >> best;

								if (best == 'y'){
									//If user choice is yes, minuse the coins by the recommend move.
									coins -= maximum;
									cout << "now there are " << coins << " coins left" << endl;
									cout << endl;
									cout << "*************************************************************************" << endl;

									if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
										cout << "Great job, you won the game ! " << endl;
										win = false;
										break;
									}
									break;
								}


								else if (best == 'n'){
									//If user choice is no, minuse the coins by the user move.
									coins -= userMove;
									cout << "now there are " << coins << " coins left" << endl;
									cout << endl;
									cout << "*************************************************************************" << endl;

									if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
										cout << "Great job, you won the game ! " << endl;
										win = false;
										break;
									}
									break;
								}

								else{
									cout << "Please enter a valid choice." << endl;


									cout << endl;
									cout << endl;
									cout << endl;
								}
							}
						}
					}

					//If the number of coins - the  number = 0, take the move.
					else if (coins - i == 0){

						if (userMove == i){
							//If the user move is the same as the recommending move,tell the user that it is a optimal move.

							cout << "Your move is optimal" << endl;
							coins -= userMove;
							cout << "now there are " << coins << " coins left" << endl;
							if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
								cout << "Great job, you won the game ! " << endl;
								win = false;
								break;
							}
							cout << endl;
							cout << "*************************************************************************" << endl;
							break;
						}

						else {



							bool valid = true;
							//checking valid input
							while (valid){

								char best;
								//To store the user choice of taking recommending move or not

								cout << "The best move could be : " << i << endl;
								cout << "Do you want to take this move ?  Enter 'y' for yes or 'n' for no." << endl;
								cin >> best;

								if (best == 'y'){
									//If user choice is yes, minuse the coins by the recommend move.
									coins -= i;
									cout << "now there are " << coins << " coins left" << endl;
									cout << endl;
									cout << "*************************************************************************" << endl;

									if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
										cout << "Great job, you won the game ! " << endl;
										win = false;
										break;
									}
									break;
								}


								else if (best == 'n'){
									//If user choice is no, minuse the coins by the user move.
									coins -= userMove;
									cout << "now there are " << coins << " coins left" << endl;
									cout << endl;
									cout << "*************************************************************************" << endl;

									if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
										cout << "Great job, you won the game ! " << endl;
										win = false;
										break;
									}
									break;
								}

								else{
									cout << "Please enter a valid choice." << endl;


									cout << endl;
									cout << endl;
									cout << endl;
								}
							}
						}
					}

					//If the total coins minuse the number and it forms the winning formula which is  ((coins % (maximum + 1) == 0)),than it is a optimal move.
					else if ((coins - i) % (maximum + 1) == 0){



						if (userMove == i){
							//If the user move is the same as the recommending move,tell the user that it is a optimal move.
							cout << "Your move is optimal" << endl;
							coins -= userMove;
							cout << "now there are " << coins << " coins left" << endl;
							if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
								cout << "Great job, you won the game ! " << endl;
								win = false;
								break;
							}
							cout << endl;
							cout << "*************************************************************************" << endl;
							break;
						}

						else {

							bool valid = true;
							//checking valid input
							while (valid){

								char best;
								//To store the user choice of taking recommending move or not
								cout << "The best move could be : " << i << endl;
								cout << "Do you want to take this move ?  Enter 'y' for yes or 'n' for no." << endl;
								cin >> best;

								if (best == 'y'){
									//If user choice is yes, minuse the coins by the recommend move.
									coins -= i;
									cout << "now there are " << coins << " coins left" << endl;
									cout << endl;
									cout << "*************************************************************************" << endl;

									if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
										cout << "Great job, you won the game ! " << endl;
										win = false;
										break;
									}
									break;
								}


								else if (best == 'n'){
									//If user choice is no, minuse the coins by the user move.
									coins -= userMove;
									cout << "now there are " << coins << " coins left" << endl;
									cout << endl;
									cout << "*************************************************************************" << endl;

									if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
										cout << "Great job, you won the game ! " << endl;
										win = false;
										break;
									}
									break;
								}

								else{
									cout << "Please enter a valid choice." << endl;


									cout << endl;
									cout << endl;
									cout << endl;
								}
							}
						}
					}

				}

				break;
			}

		}
	}
	}
	
}
				
			
		
	

		
		

void computer_Move_For_Loser_Takes_The_Last_Coin(){
	//This function takes the responsibility for the computer move when loser is the one who takes the last coin.

	if (coins == 0){//If the coins have all be taken by the user before computer move, it means you won the game and so set the game resul as true.
		win = false;
	}

	//If therei is one coin left, take the coin and set the game result false.
	else if (coins == 1){
		coins -= 1;
		cout << "I have taken " << 1 << " coins away and there are " << coins << " coins left" << endl;

		if (coins == 0){//If the number of coins = 0 after this move, it means computer lost the game,so set the game result as false.
			cout << "GG!!   YOU WON   " << endl;
			win = false;
		}
	}


	/* 
	If when it is computer's turn and the number of coins remain minuse one is dividable by the maximum number of coins you can take  plus one,
	the computer is in a losing situation. ((coins-1 % (maximum + 1) == 0)) In this formula, there is one coin minused from coins and one  added to
	the max, it means by this move there will be 2 more extra coins left.
	For example, if there are 4 coins left and the maximum is 2,
	no matter how many coins computer takes, you will left 2 extra coins. So the user can take 1 away and left the last one for you.
    So what computer can do is just take any number of coins that is allowed. So the winning strategy of this game
	if try to get you opponant into this losing situation.
	*/

	else if ((coins-1 % (maximum + 1) == 0)){
		// If when it is computer's turn and the number of coins remain minuse one is dividable by the maximum number of coins you can take  plus one,
		//Just take random numbe of coins allowed.

		int computerMove = rand() % maximum + 1;
		coins -= computerMove;
		cout << "I have taken " << computerMove << " coins away and there are " << coins << " coins left" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
	}

	//If the losing formula :((coins-1 % (maximum + 1) == 0)) is not true, than computer is in a winning situation.
	//There are several winning moves to consider.
	
	else if (!(coins-1 % (maximum + 1) == 0)){
	

		bool flag = true;


		char goodMove;
		//for holding the user choice about having computer taking losing random move.

		while (flag){
			cout << "Do you want me to take a random losing move?  Enter 'y' for yes or 'n' for no." << endl;
			cin >> goodMove;

			if (goodMove == 'y'){
				//If choice is yes, make a random move.
				int computerMove = rand() % maximum + 1;
				coins -= computerMove;
				cout << "I have taken " << computerMove << " coins away and there are " << coins << " coins left" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				if (coins == 0){//If the number of coins = 0 after this move, it means computer lost the game,so set the game result as false.
					cout << "GG!!   YOU WON   " << endl;
					win = false;
					break;
				}
				break;
			}

			//If choice is no, take optimal move.
			else if (goodMove == 'n'){

				//This for loop gives the try of number from 2- max for each situation.
				for (int i = 1; i <= maximum; i++){

					// If the coins remain minuse the number makes the winning formula: ((coins-1 % (maximum + 1) == 0)) true ,takes the move
					if (((coins - 1) - i) % (maximum + 1) == 0){

						coins -= i;
						cout << "I have taken " << i << " coins away and there are " << coins << " coins left" << endl;
						cout << endl;
						cout << endl;
						cout << endl;

						//If when it is computer move and there is 1 coin left, take the coin and tell the user that he won.
						if (coins == 0){//If the number of coins = 0 after this move, it means computer lost the game,so set the game result as false.
							cout << "GG!!   YOU WON   " << endl;
							win = false;
							break;
						}
						break;
					}
					// If the coins - 1 minuse the number =0, it is a good move because we had left one coin foe the user.  
					else if ((coins - 1) - i == 0){


						coins -= i;
						cout << "I have taken " << i << " coins away and there are " << coins << " coins left" << endl;
						cout << endl;
						cout << endl;
						cout << endl;
						if (coins == 0){//If the number of coins = 0 after this move, it means computer lost the game,so set the game result as false.
							cout << "GG!!   YOU WON   " << endl;
							win = false;
							break;
						}

						break;

					}
					//If the coins - 1 minuse the max =0, just take the max away so there will be one coin left.
					else if ((coins - 1) - maximum == 0){


						coins -= maximum;
						cout << "I have taken " << maximum << " coins away and there are " << coins << " coins left." << endl;
						cout << endl;
						cout << endl;
						cout << endl;

						if (coins == 0){// If the number of coins = 0 after this move, it means computer lost the game, so set the game result as false.
							cout << "GG!!   YOU WON   " << endl;
							win = false;
							break;
						}
						break;
					}

					//If all non of about works, kust take random coin away.
					else if (i == maximum){

						int computerMove = rand() % maximum + 1;
						coins -= computerMove;

						cout << "I have taken " << computerMove << " coins away and there are " << coins << " coins left" << endl;
						cout << endl;
						cout << endl;
						cout << endl;
						break;

					}
				}
				break; 
			}
			else
				cout << "Please enter a valid choice" << endl;
		}
		}
}


void user_Move_For_Loser_Takes_The_Last_Coin(){
	//This function is responsible for the user move when winner is the one that takes the last coin.

	if (coins == 0){//If the coins have all be taken by the computer before user move, it means computer  won the game and so set the game resul as true.
		win = false;
	}


	else{

	bool repet = true;
	//For the checking of invadility of user input.

	while (repet){

		cout << "how many coins do you want to take ?" << endl;
		cin >> userMove;

		if (userMove > maximum || userMove == 0 || userMove > coins){
			//If the user input is greater than the max,or  the user input is =0,or  the user input is greater the number of coins remain,
			//It is a violation.
			cout << "rule violation!" << endl;
		}


		else if (userMove <= maximum){
			//If the input is valid, ask the user if he will take the move that is recommanded.



			/* If when it is user's turn and the number of coins remain is dividable by the maximum number of coins you can take  plus one,
			the user is in a losing situation. For example, if there are 3 coins left and the maximum is 2,no matter how many coins user takes,he will no
			be the one to take the last coin be cause on the pluse one in maximum. */
			if (((coins - 1) % (maximum + 1) == 0)){


				cout << "There is no optimal move for you." << endl;
				coins -= userMove;
				cout << "now there are " << coins << " coins left" << endl;
				if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
					cout << "GG, I won the game ! " << endl;
					win = false;
					break;
				}
				cout << endl;
				cout << endl;
				cout << endl;
				cout << "*************************************************************************" << endl;
				break;
			}


			/* If when it is user's turn and the number of coins remain is not dividable by the maximum number of coins you can take  plus one,
			the user is in a winning situation. For example, if there are 3 coins left and the maximum is 2,no matter how many coins user takes,he will no
			be the one to take the last coin be cause on the pluse one in maximum. */
			else if (!((coins - 1) % (maximum + 1) == 0)){


				//This for loop gives the try of number from 1 - max for each situation.
				for (int i = 1; i <= maximum; i++){


					//If the number of coins - the max number the is allowed to take = 0, take the move.
					if ((coins - 1) - maximum == 0){
						if (maximum == i){
							//If the user move is the same as the recommending move,tell the user that it is a optimal move.

							cout << "Your move is optimal" << endl;
							coins -= userMove;
							cout << "now there are " << coins << " coins left" << endl;
							if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
								cout << "Great job, you won the game ! " << endl;
								win = false;
								break;
							}
							cout << endl;
							cout << "*************************************************************************" << endl;
							break;
						}


						else {
							//If uesr move is not optimal, recommand use for the best move.



							bool valid = true;
							//Checking the valid input.

							while (valid){

								char best;
								//To store the user choice of taking recommending move or not


								cout << "The best move could be : " << maximum << endl;
								cout << "Do you want to take this move ?  Enter 'y' for yes or 'n' for no." << endl;
								cin >> best;

								if (best == 'y'){
									//If user choice is yes, minuse the coins by the recommend move.
									coins -= maximum;
									cout << "now there are " << coins << " coins left" << endl;
									cout << endl;
									cout << "*************************************************************************" << endl;

									if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
										cout << "Great job, you won the game ! " << endl;
										win = false;
										break;
									}
									break;
								}


								else if (best == 'n'){
									//If user choice is no, minuse the coins by the user move.
									coins -= userMove;
									cout << "now there are " << coins << " coins left" << endl;
									cout << endl;
									cout << "*************************************************************************" << endl;

									if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
										cout << "Great job, you won the game ! " << endl;
										win = false;
										break;
									}
									break;
								}

								else{
									cout << "Please enter a valid choice." << endl;


									cout << endl;
									cout << endl;
									cout << endl;
								}
							}
						}
					}

					//If the number of coins - the  number = 0, take the move.
					else if ((coins - 1) - i == 0){

						if (userMove == i){
							//If the user move is the same as the recommending move,tell the user that it is a optimal move.

							cout << "Your move is optimal" << endl;
							coins -= userMove;
							cout << "now there are " << coins << " coins left" << endl;
							if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
								cout << "Great job, you won the game ! " << endl;
								win = false;
								break;
							}
							cout << endl;
							cout << "*************************************************************************" << endl;
							break;
						}

						else {



							bool valid = true;
							//checking valid input
							while (valid){

								char best;
								//To store the user choice of taking recommending move or not

								cout << "The best move could be : " << i << endl;
								cout << "Do you want to take this move ?  Enter 'y' for yes or 'n' for no." << endl;
								cin >> best;

								if (best == 'y'){
									//If user choice is yes, minuse the coins by the recommend move.
									coins -= i;
									cout << "now there are " << coins << " coins left" << endl;
									cout << endl;
									cout << "*************************************************************************" << endl;

									if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
										cout << "Great job, you won the game ! " << endl;
										win = false;
										break;
									}
									break;
								}


								else if (best == 'n'){
									//If user choice is no, minuse the coins by the user move.
									coins -= userMove;
									cout << "now there are " << coins << " coins left" << endl;
									cout << endl;
									cout << "*************************************************************************" << endl;

									if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
										cout << "Great job, you won the game ! " << endl;
										win = false;
										break;
									}
									break;
								}

								else{
									cout << "Please enter a valid choice." << endl;


									cout << endl;
									cout << endl;
									cout << endl;
								}
							}
						}
					}

					//If the total coins minuse the number and it forms the winning formula which is  ((coins % (maximum + 1) == 0)),than it is a optimal move.
					else if (((coins - 1) - i) % (maximum + 1) == 0){



						if (userMove == i){
							//If the user move is the same as the recommending move,tell the user that it is a optimal move.
							cout << "Your move is optimal" << endl;
							coins -= userMove;
							cout << "now there are " << coins << " coins left" << endl;
							if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
								cout << "Great job, you won the game ! " << endl;
								win = false;
								break;
							}
							cout << endl;
							cout << "*************************************************************************" << endl;
							break;
						}

						else {

							bool valid = true;
							//checking valid input

							while (valid){


								char best;
								//To store the user choice of taking recommending move or not
								cout << "The best move could be : " << i << endl;
								cout << "Do you want to take this move ?  Enter 'y' for yes or 'n' for no." << endl;
								cin >> best;

								if (best == 'y'){
									//If user choice is yes, minuse the coins by the recommend move.
									coins -= i;
									cout << "now there are " << coins << " coins left" << endl;
									cout << endl;
									cout << "*************************************************************************" << endl;

									if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
										cout << "Great job, you won the game ! " << endl;
										win = false;
										break;
									}
									break;
								}


								else if (best == 'n'){
									//If user choice is no, minuse the coins by the user move.
									coins -= userMove;
									cout << "now there are " << coins << " coins left" << endl;
									cout << endl;
									cout << "*************************************************************************" << endl;

									if (coins == 0){//If the number of coins = 0 after this move, it means user won the game,so set the game result as false.
										cout << "Great job, you won the game ! " << endl;
										win = false;
										break;
									}
									break;
								}

								else{
									cout << "Please enter a valid choice." << endl;


									cout << endl;
									cout << endl;
									cout << endl;
								}
							}
						}
					}

				}

				break;
			}
		}
		}

	}


}

void choice0(){
	/*
	This function setts a loop which will keep of taking turn or the user and computer move until the game result is set false.
	There are four situation.

	First is when user wants to move first and the end-game-setting is winner takes the last one.
	In this situation, user_Move_For_Winner_Takes_The_Last_Coin is triggered first, then the computer_Move_For_Winner_Takes_The_Last_Coin.

     Second is when user chose computer move first and the end-game-setting is winner takes the last one.
	 In this situation, computer_Move_For_Winner_Takes_The_Last_Coin is triggered first, then the  user_Move_For_Winner_Takes_The_Last_Coin.

	 Third is when user wants to move first and the end-game-setting is loser takes the last one.
	In this situation, user_Move_For_Loser_Takes_The_Last_Coin is triggered first, then the computer_Move_For_Loser_Takes_The_Last_Coin.

	Fouth is when user chose the computer to move first and the end-game-setting is loser takes the last one.
	In this situation, computer_Move_For_Loser_Takes_The_Last_Coin is triggered first, then the user_Move_For_Loser_Takes_The_Last_Coin .
	*/

	srand((unsigned int)time(NULL));
	//For the use of rand().


	while (win){
		
		if (y_n == 'y'&& w_l == 'w'){
			user_Move_For_Winner_Takes_The_Last_Coin();
			computer_Move_For_Winner_Takes_The_Last_Coin();
		}

		else if (y_n == 'n'&& w_l == 'w'){
			computer_Move_For_Winner_Takes_The_Last_Coin();
			user_Move_For_Winner_Takes_The_Last_Coin();
		}

		else if (y_n == 'y'&& w_l == 'l'){
			user_Move_For_Loser_Takes_The_Last_Coin();
			computer_Move_For_Loser_Takes_The_Last_Coin();
		}

		else if (y_n == 'n'&& w_l == 'l'){
			computer_Move_For_Loser_Takes_The_Last_Coin();
			user_Move_For_Loser_Takes_The_Last_Coin();
		}


	}


	//After the game is over, reset all veriables.
	 coins = 12, maximum = 3;
	  y_n = 'y';
	 w_l = 'w';
	 win = true;
	 cout << endl;
	 cout << endl;
	 cout << endl;
	 cout << endl;
	}
	




	int main(){

		//The main function calls all the function above.

		int choice;
		//For the input of user choice.

	
		
		

		bool flag = true;
		// For displaying functions repetedly until user choose to quit.


		while (flag){

			if (y_n == 'y')
				m = "user    ";

			
			else if (y_n == 'n')
				m = "computer";

			

			if (w_l == 'w')
				b = "Winner takes the last coin";

			else if (w_l == 'l')
				b = "loser takes the last coin";


			displayMenu();
			cin >> choice;

			if (choice == 1){
				choice1();
			}
			else if (choice == 2){
				choice2();
				
			}
			else if (choice == 3){
				choice3();
				
					
			}
			else if (choice == 4){

				choice4();
			}

			else if (choice == 5){
				
				choice5();
			}
			else if (choice == 0){
				choice0();
			
			}
			else if (choice == 6){
				flag = false;
			}
		
		else
			cout << "Please enter a valid choice" << endl;
	
		}


		char c;
		cin >> c;

		return 0;
	}