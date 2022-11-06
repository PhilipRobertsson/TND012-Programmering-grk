/*
 * TND012, Lab1: exercise 1
 * Author: Philip Robertsson
 * Program to convert currency from Euro to SEK
 * Input: a quantity of Euro and exchange rate Euro to SEK
 * Output: a quantity of Euro converted to SEK
 */

#include <iostream>  //std::cin, std::cout

int main() {
    // Variables
    double money_Euro = 0.0;
    double euro_exchange_rate = 0.0;
    double money_SEK = 0.0;
    int choice;

    std::cout << "     ____              __  \n";
    std::cout << "    / __ )____ _____  / /__\n";
    std::cout << "   / __  / __ `/ __ \\/ //_/ \n";
    std::cout << "  / /_/ / /_/ / / / /, <    \n";
    std::cout << " /_____/\\__,_/_/ /_/_/|_|   \n\n";

    // Menu 
    std::cout << "What do you want to do?\n";
    std::cout << "1. Convert from Euro to SEK\n";
    std::cout << "2. Convert from SEK to Euro\n";
    std::cout << "3. Exit\n";
    std::cin >> choice;
    if (choice == 1) {
        // Convert from Euro to SEK
        std::cout << "Euro exchange rate: ";
        std::cin >> euro_exchange_rate;
        std::cout << "Euro: ";
        std::cin >> money_Euro;
        money_SEK = euro_exchange_rate * money_Euro;

        // Display the result: euro -> SEK
        std::cout << money_Euro << " Euro = " << money_SEK << " SEK\n";

    }
    else if (choice == 2) {
        // Convert from SEK to Euro
        std::cout << "Euro exchange rate: ";
        std::cin >> euro_exchange_rate;
        std::cout << "SEK: ";
        std::cin >> money_SEK;
        money_Euro = money_SEK / euro_exchange_rate;

        // Display the result: SEK -> Euro
        std::cout << money_Euro << " Euro = " << money_SEK << "SEK\n";
    }
    else if (choice == 3) {
        std::cout << "Exiting...\n";
    }
    else {
        main();
    }

    // ADD CODE for  Exercise 1.5 below
}
