#include <iostream>
using namespace std;
int main() {
    int a = 10; // Variable declaration, initialization
    cout << "Output a is: " << a << endl;

    int b = 0;
    cout << "Input is: " << endl;
    cin >> b; // Input from user
    cout << "Output b is: " << b << endl;

    int c = a + b; // Addition
    float d = 0, e = 0;
    cout << "Input c (sum of a and b) is: " << c << endl;
    cin >> d >> e; // Input multiple numbers from user
    float result = 3*c + 2*d + e; // Expression (Math)
    cout << "Calculation is: " << result << endl;

    return 0;
}


 