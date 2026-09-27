# Number Guessing Game (C++)

A simple, interactive console-based game built in C++. The game generates a random secret number, and the player tries to guess it within a limited number of attempts. It provides smart hints to help the player navigate closer to the answer.

## Features
- **Dynamic Number Generation:** Automatically generates a new random secret number between **1 and 50** every time the game starts.
- **Limited Attempts:** The player gets a maximum of **5 chances** to guess the correct number, adding an exciting challenge to the game.
- **Intelligent Hints:** After every incorrect guess, the game guides the player by providing instant feedback:
  - `Hint: Your guess is too high` (যদি অনুমানটি আসল সংখ্যার চেয়ে বড় হয়)
  - `Hint: Your guess is too low` (যদি অনুমানটি আসল সংখ্যার চেয়ে ছোট হয়)
- **Winning & Game Over Logic:** Celebrates a correct guess instantly or reveals the secret number if the player runs out of attempts.

## How to Play
1. The computer secretly chooses a number between 1 and 50.
2. You will be prompted to enter your guess.
3. Use the high/low hints to adjust your next guess.
4. Win the game by guessing the exact number within 5 tries!

## Prerequisites
To run this game on your machine, you need:
- A C++ compiler (like GCC/MinGW, Clang, or MSVC)
- A text editor or IDE (like VS Code, Code::Blocks)

## How to Compile and Run

Open your terminal or command prompt in the project folder and run the following standard commands:

### 1. Compile the code:
```bash
g++ guessingGame.cpp -o NumberGuessingGame
```


### 2. Run the game:
- **Windows:**
  ```bash
  .\NumberGuessingGame.exe
  ```
- **Linux / Mac:**
  ```bash
  ./NumberGuessingGame
  ```

## Code Overview
The project heavily utilizes core C++ features:
- `srand(time(0))` and `rand()` for seeding and generating true random numbers.
- A standard `for` loop to strictly track and enforce the 5-attempt limit.
- `if-else if` conditional blocks to evaluate and compare the player's input with the secret number.
