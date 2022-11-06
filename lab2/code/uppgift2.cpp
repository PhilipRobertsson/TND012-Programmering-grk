/*
 * TND012, Lab2: exercise 2
 * Author: Philip Robertsson
 * Promt the user to enter the constants b and c in the equation 
 * x^2 + bx + c = 0 and use the pq-formula to calcualte the real roots of the equation,
 * then output the result with x1 and x2 with three digits after the decimal point.
 */

#include <iostream>     //std::cin, std::cout
#include<cmath>         // sqrt(), pow()
#include <iomanip>     // std::setprecision
using namespace std;

int main() {
    // ADD CODE

    // Variables
    double b = 0.0;
    double c = 0.0;
    double firstRoot = 0.0;
    double secondRoot = 0.0;
    double complexRootTest = 0.0;

    cout << "Solving a second degree equation\n";
    cout << "of the form x^2 + b*x + c\n\n";

    //Promt user to enter the b and c values
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    //Calculate with the pq-formula to get the real roots
    firstRoot = - (b / 2) + sqrt(pow((b / 2), 2) - c);
    secondRoot = - (b / 2) - sqrt(pow((b / 2), 2) - c);
    complexRootTest = pow((b / 2), 2) - c;

    //Display the result
    if (complexRootTest < 0) {
        cout << "x1 and x2 are complex roots!!\n";
    }
    else if(firstRoot==secondRoot){
        cout << "x1, x2 = "<<fixed<<setprecision(3)<< firstRoot << "    (double root)\n";
    }
    else {
        cout << "x1 = " << fixed << setprecision(3) << firstRoot << "\n";
        cout << "x2 = "  << secondRoot << "\n";
    }

}
