/*
 * TND012, Lab3: exercise 2
 * Author: Philip Robertsson
 *
 */

#include <iostream>
#include <iomanip>  //setw, setfill
#include <cmath>

using namespace std;

int main() {
    //variables
    double firstPrice = 0.0;
    double lastPrice = 0.0;
    double priceStep = 0.0;
    double taxPrecent = 0.0;
    double tax = 0.0;
    bool done = false;

    while (!done) {
        cout << "Enter first price: ";
        cin >> firstPrice;
        if (firstPrice < 0) {
            cout << "Invalid input!\n";
            done = false;
        }
        else {
            done = true;
        }
    }
    done = false;
    while (!done) {
        cout << "Enter last price: ";
        cin >> lastPrice;
        if (firstPrice > lastPrice) {
        cout << "Invalid input!\n";
        done = false;
        }
        else {
          done = true;
        }
    }
    done = false;
    while (!done){
        cout << "Enter price step: ";
        cin >> priceStep;
        if (priceStep < 0){
            cout <<"Invalid input!\n";
            done = false;
        }
        else {
            done = true;
        }
    }
    cout << "Enter tax precentage: ";
    cin >> taxPrecent;

    cout << "\nTaxes table\n";
    cout << "Tax = " << taxPrecent << ".00%\n\n";
    cout << setw(0) << "Price Tax Free" << setw(10) << "Tax"<< setw(23) <<"Price with Tax\n";
    cout << setw(48) << setfill('=') << "=\n";
    cout << setfill(' ');
    for (double price = firstPrice; price <= lastPrice; price += priceStep) {
        tax = price * (taxPrecent / 100);
        double taxrounded = (round(100 * tax)/100);
        cout << setw(0) << setprecision(2) << fixed << price << setw(20) << taxrounded << setw(15) << (price+taxrounded) << "\n";
    }  
}
