/*
 * TND012, Lab3: exercise 1
 * Author: Philip Robertsson
 *
 */

 #include<iostream>
 #include <vector>
using namespace std;

int main() {
    // ADD CODE
    
    //variables
    int ticketsAmount = 0;
    int age = 0;
    int totalPrice = 0;
    bool done = false;

    while (!done) {
        // constant variables
        constexpr int FIRST_AGE_GROUP = 8;
        constexpr int SECOND_AGE_GROUP = 15;

        constexpr int SECOND_PRICE_GROUP = 30;
        constexpr int THIRD_PRICE_GROUP = 80;


        cout << "Welcome to our Football Arena\n";
        cout << "------------------------------------\n\n";
        cout << "Enter number of tickets: ";
        cin >> ticketsAmount;
        cout << "\n";
        for (int i = 0; ticketsAmount > i; i++) {
            cout << "Enter age of person " << (i + 1) << ": ";
            cin >> age;
            if (age < FIRST_AGE_GROUP) {
                totalPrice += 0;
            }
            else if (age < SECOND_AGE_GROUP) {
                totalPrice += SECOND_PRICE_GROUP;
            }
            else {
                totalPrice += THIRD_PRICE_GROUP;
            }
        }
        if (ticketsAmount < 0) {
            cout << "Invalid amount of tickets!\n";
        }
        else {
            cout << "\nTotal price = " << totalPrice << " SEK \n";
            done = true;
        }
    }
}
