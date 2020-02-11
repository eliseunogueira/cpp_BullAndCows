#include <iostream>
#include <string>
using namespace std;
void PrintIntro();
string GetGuessAndPrintBack();
// the entry point for our application
int main()
{
  PrintIntro();
  GetGuessAndPrintBack();
  return 0;
}

// the implementation of the method
void PrintIntro()
{
  // Introduce the game
  constexpr int WORLD_LENGTH = 5;
  cout << "Welcome to Bulls and Cows, a fun word game.\n";
  cout << "Can you guess the " << WORLD_LENGTH;
  cout << " letter isogram I'm thingking of\n";
  cout << endl;
  return;
}

// the implementation of getGuess
// get a guess from the player
string GetGuessAndPrintBack()
{
  cout << "Please write your guess: ";
  string Guess = "";
  getline(cin, Guess);
  // print the guess guess back to them
  cout << "Your guess was: " << Guess;
  return Guess;
}