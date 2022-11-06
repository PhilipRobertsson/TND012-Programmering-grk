/*
 * TND012, Lab2: exercise 3
 * Author: Philip Robertsson
 * Promt the user to enter a line in the format y = mx + b 
 * then promt the user to enter a point in the format (x,y).
 * The program then checks if the y value is equal to mx + b and returns the result with the help of if statements
 */

/*
* Input examples
* Input 1: y = 2.30 x + 4.00, p = (10, 27)
* Input 2: y = 1.00 x - 1.00, p = (-1.22, -2.22)
* Input 3: y = 1.00 x + 1.00, p = (-1.67, -0.67)
*/

#include <iostream> // std::cout, std::cin
#include <cmath>


int main() {
    // Variables for the line
    double m = 0.0;
    double b = 0.0;
    std::cout << "This line will be in the y = mx + b format\n";
    std::cout << "Enter a line (m followed by b): ";
    std::cin >> m >> b;

    // Variables for the point
    double x = 0.0;
    double y = 0.0;
    std::cout << "Enter a point (x and y coordinates): ";
    std::cin >> x >> y;

    // Put all intputs into two if statements, if y = mx + b tell the user that the point belongs to the line
    // and if y =/= mx + b tell the user that the point does not belong to the line
    constexpr double EPSILON = 1e-10;

    if (abs(y - (m * x + b)) < EPSILON) {
        std::cout<< "Point (" << x << ", "<< y << ") belongs to line y = " << m << "x + " << b << "\n";
    }
    else {
        std::cout << "Point (" << x << ", " << y << ") does not belong to line y = " << m << "x + " << b << "\n";
    }
    

}