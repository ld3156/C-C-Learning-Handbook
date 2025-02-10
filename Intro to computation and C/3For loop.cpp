#include <iostream>
using namespace std;
int main() {
    // Example 1
    int i = 0;
    cout << "even number below 20" << endl;
    // For loop
    for (i = 1; i < 20; i ++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    // Example 2
    char a = ' ';
    cout << "guess the letter: " << endl;
    int j = 0;
        for(j = 0; j < 3; j++) {
        cin >> a; // Input from user
        // If statement
        if (a == 'A') { 
            cout << "You guessed it right!" << endl;
            break;
        } else {
            cout << "You guessed it wrong!" << endl;
        }
    }
    return 0;
}