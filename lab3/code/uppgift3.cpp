/*
 * TND012, Lab3: exercise 3
 * Author:
 *
 */

// Test input: 10 12.5 13 8.5 1120 155 200 220 44 150 112 75 109 80 2300 157 66 47 449 154 STOP

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    // variables
    double taxPrecent = 0.0;
    double tax = 0.0;
    double price = 0.0;
    vector<double> V;

    cout << "Enter tax: ";
    cin >> taxPrecent;
    cout << "Enter product prices: ";

    while (cin >> price) {
        V.push_back(price);
    }
    if (V.empty() == false) {
        cout << "\n";
        cout << "\nTaxes table\n";
        cout << "Tax = " << taxPrecent << ".00%\n\n";
        cout << setw(0) << "Price Tax Free" << setw(10) << "Tax" << setw(23) << "Price with Tax\n";
        cout << setw(48) << setfill('=') << "=\n";
        cout << setfill(' ');
        for (double e: V) {
            tax = e * (taxPrecent / 100);
            cout << setw(10) << setprecision(2) << fixed << e << setw(15) << tax << setw(20) << (e + tax) << "\n";
        }
    } 
}
