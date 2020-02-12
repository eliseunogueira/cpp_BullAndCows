#include <iostream>
#include <string>
using namespace std;
void PrintIntro();
void PlayGame();
string GetGuessAndPrintBack();
// the entry point for our application
int main()
{
  PrintIntro();
  PlayGame();
  return 0; // Exit the Application
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
string GetGuess()
{
  cout << "Please write your guess: ";
  string Guess = "";
  getline(cin, Guess);
  return Guess;
}

void PlayGame()
{
  constexpr int NUMBER_OF_TURNS = 5;
  for (int i = 1; i <= NUMBER_OF_TURNS; i++)
  {
    string Guess = GetGuess();
    cout << "Your guess was: " << Guess;
    cout << endl;
  }
}