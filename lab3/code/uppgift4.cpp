/*
 * TND012, Lab3: exercise 4
 * Author: Philip Robertsson
 * (4 * (t * 100 + o * 10 + o) == (g * 1000 + o * 100 + o * 10 + d))
 */

#include <iostream>
using namespace std;

int main() {
    // TOO = t*100 o*10 o
   // GOOD = 4*(t*100 o*10 o)
   // GOOD = g*1000 o*100 o*10 d
    for (int t = 0; t <= 9; t++) {
        for (int o = 0; o <= 9; o++) {
            for (int g = 0; g <= 9; g++) {
                for (int d = 0; d <= 9; d++) {
                    if (d != t && d != o && d != g && t!=o && g != o) {
                         if ((4 * (t * 100 + o * 10 + o) == (g * 1000 + o * 100 + o * 10 + d))) {
                             cout << "TOO = " << (t * 100 + o * 10 + o) << " and GOOD = " << (g * 1000 + o * 100 + o * 10 + d) << "\n";
                         }
                    }
                   
                }
            }
        }
    }
}
