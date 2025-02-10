#include <iostream>
using namespace std;
int main() {

    char a = 'A'; // Variable declaration, initialization
    cout << "guess the letter: " << endl;
    cin >> a; // Input from user

    // If statement
    if (a == 'A') { 
        cout << "You guessed it right!" << endl;
    } else {
        cout << "You guessed it wrong!" << endl;
    }
    return 0;
}