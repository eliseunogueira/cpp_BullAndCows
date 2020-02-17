#pragma once
#include <string>
using FString = std::string;
using int32 = int;

class FBullCowGame
{
public:
  FBullCowGame();
  void Reset(); // TODO make a more rich return value.
  int32 GetMaxTries() const;
  int32 GetCurrentTry() const;
  bool IsGameWon() const;
  bool CheckGuessValidity(FString); // TODO make a more rich return value

private:
  int32 MyCurrentTry;
  int32 MyMaxTries;
};