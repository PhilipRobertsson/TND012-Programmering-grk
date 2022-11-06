/*
 * TND012, Lab4: program to find prime numbers
 * Author: Philip Robertsson
 *
 */

#include <iostream>
#include <vector>

using namespace std;

// ADD any needed functions here
void display_menu() {
    cout << "1. Test prime\n";
    cout << "2. Next prime\n";
    cout << "3. Previous prime\n";
    cout << "4. Display primes\n";
    cout << "5. Exit\n\n";
}
int test_prime(int n) {
   
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    
}
int next_prime(int n) {
    bool done = false;
    int i = n;
    while (!done) {
        i = i + 1;
        if (test_prime(i)) {
            done = true;
            n = i;
            return n;
        }
    }
    
}
int prev_prime(int n) {
    bool done = false;
    int i = n;
    while (!done) {
        i = i - 1;
        if (test_prime(i)) {
            done = true;
            n = i;
            return n;
        }
    }
}
int display_primes(int n) {
    for (int i = 2; i <= n; i++) {
        if (test_prime(i)) {
            return i;
        }
    }
}

int main() {
    constexpr int Exit = 5;

    int option = Exit;
    int n = -1;
    int p = 0;

    do {
        // Display the menu
        display_menu();
        // Read user option
        cout << "Enter your choice: ";
        cin >> option;
        // Handle user option
        switch (option) {
              case 1:
                  while (n<0) {
                        cout << "Enter a prime number: ";
                        cin >> n;
                  }
                  if (test_prime(n)) {
                      cout << n << " is a prime number!\n";
                      n = -1;
                  }
                  else {
                      cout << n << " is not a prime number\n";
                      n = -1;
                  }
                  break;
              
              case 2:
                  while (n < 0) {
                      cout << "Enter a prime number: ";
                      cin >> n;
                  }
                  p = next_prime(n);
                  cout << "The next prime number is " << p << "\n";
                  n = -1;
                  break;
              
              case 3:
                  while (n < 2) {
                      cout << "Enter a prime number: ";
                      cin >> n;
                  }
                  p = prev_prime(n);
                  cout << "The previous prime number is " << p << "\n";
                  n = -1;
                  break;
              
              case 4:
                  while (n < 0) {
                        cout << "Enter a prime number for the sequence [1, n] to end on: ";
                        cin >> n;
                  }
                  for (int i = 2; i <= n; i++) {
                      cout << display_primes(n) << ", ";
                  }
                  cout << "\n";
                  n = 0;
                  break;
                  
              case 5:
                  option = Exit;
                  cout << "Exiting program...\n";
                  break;
        }

    } while (option != Exit);
}
