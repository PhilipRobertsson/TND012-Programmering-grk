/*
 * TND012, Lab1: exercise 2
 * Author: Philip Robertsson
 * Program to calculate how much electricity was spent and how much to pay for it
 *
 * The program starts with declaring the variables that will be used and then proceedes to 
 * wait for the user to enter the electricity reading from this year into the console and then waits again for
 * the electricity reading from last year. The program does a simple deduction with the two values and then outputs
 * the result to the user.
 * 
 */ 

#include <iostream>  //std::cin, std::cout
#include <iomanip>      // std::setprecision

int main() {
    // ADD CODE
    
    // Variables
    double electricity_now = 0.0;
    double electricity_past = 0.0;
    double electricity_usage = 0.0;
    double kWh_price = 0.0;
    double total_cost = 0.0;
    double tenPercent_cost = 0.0;

    //Constants
    constexpr double ninteyPercent = 0.90;
    constexpr double fivePercent = 1.05;
    constexpr double tenPercent = 0.10;

        std::cout << "    ________          __       _      _ __        \n";
        std::cout << "   / ____/ /__  _____/ /______(_)____(_) /___  __ \n";
        std::cout << "  / __/ / / _ \\/ ___/ __/ ___/ / ___/ / __/ / / /  \n";
        std::cout << " / /___/ /  __/ /__/ /_/ /  / / /__/ / /_/ /_/ /   \n";
        std::cout << "/_____/_/\\___/\\___/\\__/_/  /_/\\___/_/\\__/\\__, /    \n";
        std::cout << "  / ____/___ _/ /______  __/ /___ _/ /__/____/____ \n";
        std::cout << " / /   / __ `/ / ___/ / / / / __ `/ __/ __ \\/ ___/ \n";
        std::cout << "/ /___/ /_/ / / /__/ /_/ / / /_/ / /_/ /_/ / /     \n";
        std::cout << "\\____/\\__,_/_/\\___/\\__,_/_/\\__,_/\\__/\\____/_/      \n\n\n";
    // What did the meter say this year?
        
        std::cout << "Enter electricity meter reading now: ";
        std::cin >> electricity_now;

    // What did the meter say last year?
   
        std::cout << "Enter electricity meter reading a year ago: ";
        std::cin >> electricity_past;

    // What is the regular price per kWh
    
        std::cout << "Enter regular price of 1 kWh: ";
        std::cin >> kWh_price;

    // Calculate the result
        
        electricity_usage = electricity_now - electricity_past;
        tenPercent_cost = electricity_usage * tenPercent * kWh_price * fivePercent;
        total_cost = (electricity_usage * kWh_price * ninteyPercent) + tenPercent_cost;

    // Output electricity usage this year

        std::cout << "You have used " << electricity_usage << " kWh during the last year \n";
        std::cout << "Total cost: " << std::fixed << std::setprecision(3) << total_cost << " SEK \n";
        std::cout << "10% of the used energy costs: " << tenPercent_cost << " SEK \n";
}
