# Implementation-of-Rock-Paper-Scissors-Game-in-C
This C program implements a simple console-based Rock, Paper, Scissors game where the player competes against the computer.

Here's a brief description of the code:

1  The program includes necessary header files such as <stdio.h>, <conio.h>, and <time.h>.

2  Two functions are defined:<br>
      ->numberRandomizer(int n): This function generates a random number between 0 and n-1 using rand() function seeded with the current time using srand().<br>
      ->compare(char ch1, char ch2): This function compares two characters representing the choices of the player and the computer, and returns 1 if the computer 
                                     wins, 0 if the player wins, and -1 if it's a draw.

3  In the main() function:<br>
      ->Variables are declared to keep track of player score (playerscore), computer score (compscore), and temporary variables (temp) for input.<br>
      ->An array arr[] is defined to store the choices: 'r' for rock, 'p' for paper, and 's' for scissors.<br>
      ->The game is played for three rounds using a for loop.<br>
      ->Within each round, the player selects their choice and the computer's choice is generated randomly.<br>
      ->The choices are then compared using the compare() function, and the scores are updated accordingly.<br>
      ->At the end of three rounds, the final scores are compared to determine the winner and displayed accordingly.<br>

4  The program outputs messages to inform the player about the game progress and the final outcome, whether the player wins, the computer wins, or it's a tie.<br>
