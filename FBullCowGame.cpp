#include "FBullCowGame.h"

FBullCowGame::FBullCowGame() { Reset(); };
int FBullCowGame::GetCurrentTry() const { return MyCurrentTry; };
int FBullCowGame::GetMaxTries() const { return MyMaxTries; };
bool FBullCowGame::IsGameWon() const { return false; };

void FBullCowGame::Reset()
{
  constexpr int MAX_TRIES = 8;
  MyMaxTries = MAX_TRIES;
  MyCurrentTry = 1;
  return;
};

bool FBullCowGame::CheckGuessValidity(std::string)
{
  return false;
};