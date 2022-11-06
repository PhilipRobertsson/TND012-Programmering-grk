/*
 * TND012, Lab2: exercise 4
 * Author: Philip Robertsson
 * The user is first prompted to enter thier departure time and then enter the duration of thier fligth.
 * The program then checks if the hours are over 24, the minutes are over 60 or if the input is both 24 hours and 60 minutes. If this is the case the program will return an error message.
 * After all of that is done the arrival time will be calculated. If the hours are above 24 the program will subtract 24 from the result which means a day have passed, if the minutes is over 60 the program
 * will first add an extra hour and then proceed to subtract 60 from the result which means a hour has passed. 
 * Depending if the hours and minutes are below 10 the program will write out the result with a 0 before either the hour or minute depending which is below 10. If both values are below 10 the program will 
 * write out a 0 before both values. If both values are over 10 the program writes out both values as they are
 */

#include <iostream> //std::cout, std::cin

using namespace std;

int main() {
    // ADD CODE

    // Variables 
    int depHours = 0; // dep = Departure
    int depMinutes = 0;
    int durHours = 0; // dur = Duration
    int durMinutes = 0;
    int arrHours = 0; // arr = Arrival
    int arrMinutes = 0;

    //Promt user to enter departure time and duration time
    cout << "To calculate your arrival time you need to enter your flights departure time and the duration time of the flight\n";
    cout << "Enter the departure time of the fligth (hours followed by minutes): ";
    cin >> depHours >> depMinutes;
    cout << "Enter duration of the fligth (hours followed by minutes): ";
    cin >> durHours >> durMinutes;
    if(durHours > 24 || durHours < 0 || durMinutes > 60 || durMinutes < 0 || depHours > 24 || depHours < 0 || depMinutes > 60 || depMinutes < 0 || (durHours == 24 && durMinutes == 60) || (depHours == 24 && depMinutes == 60)){
        cout << "Invalid time input\n";
    }
    else {
        // Calculate arrival time
        arrHours = depHours + durHours;
        arrMinutes = depMinutes + durMinutes;
        if (arrMinutes >= 60) {
            arrHours = arrHours + 1;
            arrMinutes = arrMinutes - 60;
        }
        if (arrHours >= 24) {
            arrHours = arrHours - 24;
        }
        

        // Display the calcualted arrival time
        if (arrHours < 10) {
            cout << "Your arrival time will be 0" << arrHours << ":" << arrMinutes << "\n";
        }
        else if (arrMinutes < 10) {
            cout << "Your arrival time will be " << arrHours << ":0" << arrMinutes << "\n";
        }
        else  if (arrHours < 10 && arrMinutes < 10) {
            cout << "Your arrival time will be 0" << arrHours << ":0" << arrMinutes << "\n";
        }
        else {
            cout << "Your arrival time will be " << arrHours << ":" << arrMinutes << "\n";
        }
        
    }
}
