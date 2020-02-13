#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
void PlayGame();
bool AskToPlayAgain();
std::string GetGuessAndPrintBack();
FBullCowGame BCGame;
// Instantiate a new Game
// the entry point for our application
int main()
{
  do
  {
    PrintIntro();
    PlayGame();
  } while (AskToPlayAgain() == true);
  return 0;
}

// the implementation of the method
void PrintIntro()
{
  // Introduce the game
  constexpr int WORLD_LENGTH = 5;
  std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
  std::cout << "Can you guess the " << WORLD_LENGTH;
  std::cout << " letter isogram I'm thingking of\n";
  std::cout << std::endl;
  return;
}

// the implementation of getGuess
// get a guess from the player
std::string GetGuess()
{
  int CurrentTry = BCGame.GetCurrentTry();

  std::cout << "Try " << CurrentTry << " Enter your guess: ";
  std::string Guess = "";
  std::getline(std::cin, Guess);
  return Guess;
}

void PlayGame()
{
  int MaxTries = BCGame.GetMaxTries();
  for (int i = 1; i <= MaxTries; i++)
  {
    std::string Guess = GetGuess();
    std::cout << "Your guess was: " << Guess;
    std::cout << std::endl;
  }
}

bool AskToPlayAgain()
{
  std::cout << "Do you want to play again? (Y/N) ";
  std::string Response = "";
  std::getline(std::cin, Response);
  return (Response[0] == 'y' || Response[0] == 'Y');
}