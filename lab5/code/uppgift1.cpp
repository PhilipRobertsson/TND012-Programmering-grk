/*
 * TND012, Lab5
 * Author: Philip Robertsson
 *
 */

/*Test data 1
country X: 50 50 100 250 100 50 100 85 100 180 10 100 -1
Sweden:    70 78 170 250 105 90 120 96 160 250 18 150 -1
*/

/*Test data 2
country X: 50 50 100 250 100 50 100 85 100 180 10 100 50 50 120 120 50 77 -1
Sweden:    70 78 170 250 105 90 120 96 160 250 18 150 65 60 190 147 90 90 -1
*/

/*Test data 3
country X: 50 50 100 250 100 50 -1
Sweden:    70 78 170 250 105 90 120 96 160 250 18 150 -1
*/

/*Test data 4
country X: 50 50 100 250 100 50 -1
Sweden:    70 78 170 250 105 90 -1
*/

// Try also your code with other test data

#include <iostream>
#include <vector>
#include<cmath>
#include<string>

using namespace std;

/******************************
 * Function declarations      *
 ******************************/
vector<int> read_seq() {
    int input = 0;
    vector<int> data = {};
    while (cin >> input && input > 0) {
        data.push_back(input);
    }
    return data;
}

vector<int> calc_diff(vector<int> xData, vector<int> svData) {
    vector<int> vectDiff = {};
    int diff = 0;
    for (int i = 0; i < xData.size(); i++) {
        diff = (svData[i] - xData[i]);
        vectDiff.push_back(diff);
    }
    return vectDiff;
}
int count_stars(int n) {
    //smaller multiple
    int a = (n / 10) * 10;
    // larger multiple
    int b = a + 10;
    // return of closest of two
    return (n - a >= b - n) ? b : a;
}
void display_histogram(vector<int> vectDiff) {
    string months = "JFMAMJJASOND";
    if (vectDiff.size() < months.size()) {
        for (int i = 0; i < vectDiff.size(); i++) {
            cout << months[i] << " ";
            for (int j = 1; j <= (count_stars(vectDiff[i]) / 10); j++) {
                cout << "*";
            }
            cout << "\n";
            if (i == 5) {
                cout << "\n";
            }
        }
    }
    else {
        for (int i = 0; i < months.size(); i++) {
            cout << months[i] << " ";
            for (int j = 1; j <= (count_stars(vectDiff[i]) / 10); j++) {
                cout << "*";
            }
            cout << "\n";
            if (i == 5) {
                cout << "\n";
            }
        }
        cout << "\n";
        if (vectDiff.size() > months.size()) {
            for (int i = months.size(); i < vectDiff.size(); i++) {
                cout << months[i - 12] << " ";
                for (int j = 1; j <= (count_stars(vectDiff[i]) / 10); j++) {
                    cout << "*";
                }
                cout << "\n";
                if (i == 5) {
                    cout << "\n";
                }
            }
        }
    }
}

/******************************
 * MAIN                       *
 ******************************/
// NOTE: main function body should NOT contain any loops

int main() {
    //Vectors
    vector<int> xData = {};
    vector<int> svData = {};

    // Step 1. Read input sequence data for country X
    cout << "Enter data for country X: ";
    xData = read_seq();


    // Step 2. Read input sequence data for Sweden
    cout << "\nEnter data for Sweden: ";
    svData = read_seq();


    if (xData.size() == svData.size()) {

        // Step 3. Calculate the difference between country_X and Sweden
        vector<int> diffData  = calc_diff(xData, svData);

        // Step 4. Display the histogram graph
        cout << "The Graph\n\n";
       display_histogram(diffData);
    } else {
        cout << "Invalid input!!\n";
    }
}

/**************************************
 * Function definitions               *
 **************************************/
