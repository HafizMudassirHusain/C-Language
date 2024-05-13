// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

bool isLetterInWord(char letter, const string& word) {
    return (word.find(letter) != string::npos);
}

void updateDisplayString(const string& word, const string& guessedLetters, string& displayString) {
    for (size_t i = 0; i < word.length(); ++i) {
        if (guessedLetters.find(word[i]) != string::npos) {
            displayString[i] = word[i];
        }
    }
}

void displayHangman(int incorrectAttempts) {
  
switch (incorrectAttempts) {
        case 0:
            cout << "  ____" << endl;
            cout << " |    |" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            break;
        case 1:
            cout << "  ____" << endl;
            cout << " |    |" << endl;
            cout << " |    O" << endl;
            cout << " |" << endl;
            cout << " |" << endl;
            break;
        case 2:
            cout << "  ____" << endl;
            cout << " |    |" << endl;
            cout << " |    O" << endl;
            cout << " |    |" << endl;
            cout << " |" << endl;
            break;
        case 3:
            cout << "  ____" << endl;
            cout << " |    |" << endl;
            cout << " |    O" << endl;
            cout << " |   /|" << endl;
            cout << " |" << endl;
            break;
        case 4:
            cout << "  ____" << endl;
            cout << " |    |" << endl;
            cout << " |    O" << endl;
            cout << " |   /|\\" << endl;
            cout << " |" << endl;
            break;
        case 5:
            cout << "  ____" << endl;
            cout << " |    |" << endl;
            cout << " |    O" << endl;
            cout << " |   /|\\" << endl;
            cout << " |   /" << endl;
            break;
        case 6:
            cout << "  ____" << endl;
            cout << " |    |" << endl;
            cout << " |    O" << endl;
            cout << " |   /|\\" << endl;
            cout << " |   / \\" << endl;
            break;
    }
    
}

void displayGame(const string& displayString, const string& guessedLetters, int incorrectAttempts, int remainingLives,
                 const string& incorrectGuesses, const string& correctGuesses) {
    // Display hangman box
    cout << "  +----+" << endl;
    cout << "  |    |" << endl;
    cout << "  |    ";
    displayHangman(incorrectAttempts);
    cout << "  |" << endl;
    cout << "  |    Lives: " << remainingLives << endl;

    // Display word and guessed letters
    cout << "========= Word: " << displayString << " =========" << endl;
    cout << "Guessed Letters: " << guessedLetters << endl;
    cout << "Incorrect Guesses: " << incorrectGuesses << endl;
    cout << "Correct Guesses: " << correctGuesses << endl;
}


int main() {
    // List of words for the game
    vector<string> words = {"hangman", "programming", "developer", "challenge", "openai", "cplusplus"};

    // Randomly select a word for the current game
    srand(static_cast<unsigned int>(time(0)));
    int randomIndex = rand() % words.size();
    string word = words[randomIndex];

    string guessedLetters;
    string displayString(word.length(), '_');
    int incorrectAttempts = 0;
    int maxAttempts = 6;
int remainingLives = maxAttempts;
    string incorrectGuesses;
    string correctGuesses;

    cout << "Welcome to Hangman!" << endl;

    while (incorrectAttempts < maxAttempts) {
        displayGame(displayString, guessedLetters, incorrectAttempts, remainingLives, incorrectGuesses, correctGuesses);

        // Get user input for a letter guess
        char guess;
        cout << "Enter a letter: ";
        cin >> guess;

        if (guessedLetters.find(guess) != string::npos) {
            cout << "You already guessed that letter. Try again." << endl;
            continue;
        }

        guessedLetters += guess;

        if (isLetterInWord(guess, word)) {
            updateDisplayString(word, guessedLetters, displayString);
            correctGuesses += guess;
            cout << "Correct guess!" << endl;
        } else {
            incorrectGuesses += guess;
            cout << "Incorrect guess. Try again." << endl;
            ++incorrectAttempts;
            --remainingLives;
        }

        if (displayString == word) {
            displayGame(displayString, guessedLetters, incorrectAttempts, remainingLives, incorrectGuesses, correctGuesses);
            cout << "Congratulations! You guessed the word: " << word << endl;
            break;
        }
    }

    if (incorrectAttempts == maxAttempts) {
        displayGame(displayString, guessedLetters, incorrectAttempts, remainingLives, incorrectGuesses, correctGuesses);
        cout << "Game over. The word was: " << word << endl;
    }

    return 0;
}




