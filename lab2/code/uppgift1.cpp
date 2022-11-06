/*
 * TND012, Lab2: exercise 1
 * Author: Philip Robertsson
 *
 * Start by declaring variables and constants that will be used in the program. Then promt the user to enter their age and using 
 * if statements decide what the ticket will cost 
 */

#include <iostream>     //std::cin, std::cout

using namespace std;

int main() {
    // ADD CODE

    //Variables
    int age = 0;
    int choice = 0;

    //Constants
    constexpr int FIRST_AGE_GROUP = 8;
    constexpr int SECOND_AGE_GROUP = 15;

    constexpr int SECOND_PRICE_GROUP = 30;
    constexpr int THIRD_PRICE_GROUP = 80;

    cout << " _____   ___    ___   ______  ____    ____  _      _           ____  ____     ___  ____    ____ \n";
    cout << "|     | /   \\  /   \\ |      ||    \\  /    || |    | |         /    ||    \\   /  _]|    \\  /    |\n";
    cout << "|   __||     ||     ||      ||  o  )|  o  || |    | |        |  o  ||  D  ) /  [_ |  _  ||  o  |\n";
    cout << "|  |_  |  O  ||  O  ||_|  |_||     ||     || |___ | |___     |     ||    / |    _]|  |  ||     |\n";
    cout << "|   _] |     ||     |  |  |  |  O  ||  _  ||     ||     |    |  _  ||    \\ |   [_ |  |  ||  _  |\n";
    cout << "|  |   |     ||     |  |  |  |     ||  |  ||     ||     |    |  |  ||  .  \\|     ||  |  ||  |  |\n";
    cout << "|__|    \\___/  \\___/   |__|  |_____||__|__||_____||_____|    |__|__||__|\\_||_____||__|__||__|__|\n\n";
    while (choice < 2 || choice > 2) {
        //Menu for the program
        cout << "Welcome to our Football Arena\n";
        cout << "------------------------------------\n\n";
        cout << "1. Get ticket prices\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            //Promt user to enter their age
            cout << "To get the price of your ticket in SEK you need to enter your age\n";
            cout << "Enter your age: ";
            cin >> age;

            //Display the ticket price depending on the age of the user
            if (age < FIRST_AGE_GROUP) {
                cout << "You can enter the match for free!\n\n";
            }
            else if (FIRST_AGE_GROUP < age && age < SECOND_AGE_GROUP) {
                cout << "Your ticket will cost " << SECOND_PRICE_GROUP << " SEK\n\n";
            }
            else if (age >= SECOND_AGE_GROUP) {
                cout << "Your ticket will cost " << THIRD_PRICE_GROUP << " SEK\n\n";
            }
            else {
                cout << "Wrong input, please enter a new age!\n\n";
            }
        }
        else if(choice ==2){
            cout << "Exiting program....\n\n";
        }
        else {
            cout << "Invalid input\n\n";
        }
    }
}
