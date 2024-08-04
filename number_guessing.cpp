#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  
  srand(static_cast<unsigned int>(time(0)));

  
  int randomNumber = rand() % 100 + 1;

  int guess;
  bool guessedCorrect = false;

  cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << endl;

  while (!guessedCorrect) {
    cin >> guess;

    if (guess == randomNumber) {
      cout << "Congratulations! You guessed the number!" << endl;
      guessedCorrect = true;
    } else if (guess > randomNumber) {
      cout << "Too high. Try again." << endl;
    } else {
      cout << "Too low. Try again." << endl;
    }
  }

  return 0;
}