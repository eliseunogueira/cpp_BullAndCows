#include <iostream>
#include <string>
using namespace std;
int main()
{
  // Introduce the game
  constexpr int WORLD_LENGTH = 5;
  cout << "Welcome to Bulls and Cows, a fun word game.\n";
  cout << "Can you guess the " << WORLD_LENGTH;
  cout << " letter isogram I'm thingking of\n";
  cout << endl;

  // get a guess from the player
  cout << "Please write your guess: ";
  string Guess = "";
  cin >> Guess;
  // report the guess back to them
  cout << "Your guess was: " << Guess;
  return 0;
}