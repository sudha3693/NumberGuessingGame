# NumberGuessingGame
Description of the Code

The provided C++ code is a simple number guessing game where the user tries to guess a randomly generated number within a specified range. Here is a breakdown of the key points in the code:

1.Include Headers and Namespace Declaration:
#include<iostream>: Includes the standard input-output stream library.
#include<cstdlib>: Includes the C standard library for random number generation.
using namespace std;: Uses the standard namespace.

2.Main Function:
int main() { ... }: The main function where the execution of the program begins.

3.Variable Declarations:
string name;: Declares a variable to store the user's name.
char input;: Declares a variable to store the user's choice to continue playing.
int inputuser;: Declares a variable to store the user's guessed number.
int score = 0;: Declares and initializes a variable to keep track of the user's score.

4.User Input for Name:
cout << "Enter your name: "; and getline(cin, name);: Prompts the user to enter their name and stores it in the variable name.

5.Game Loop:
do { ... } while(input != 'N');: A do-while loop that continues as long as the user does not enter 'N' to quit.
Inside the loop:
srand(0);: Initializes the random number generator with a fixed seed (note: using a fixed seed means the random number will always be the same sequence).
int variable = rand() % 5;: Generates a random number between 0 and 4.
cout << "Enter any number between range 0 to 5 : "; and cin >> inputuser;: Prompts the user to guess a number within the range and stores it in inputuser.

6.Guess Evaluation:
If the guessed number (inputuser) is equal to the generated number (variable):
cout << "Congratulations! You guessed the correct number";: Congratulates the user.
score++;: Increments the score.
Else:
cout << "Sorry! You guessed the wrong number. Try again";: Informs the user of the wrong guess.
7.Continue or Quit:
cout << "Would you like to try again Y/N: "; and cin >> input;: Asks the user if they want to play again.

8.End of Game:
After exiting the loop, the final score is displayed:
cout << "Your score is " << score;: Displays the user's score.
cout << "GAME END";: Indicates the end of the game.
