// how many barrels of water will the elephant needs.
#include <iostream>
using namespace std;
int main(){

    int h, r;
    cin >> h >> r;
    double d = 3.14159 * r * r * h;
    int number = 20000 / d + 1;
    cout << number << endl;
    return 0;
}