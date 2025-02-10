// Problem: Grade Level
#include <iostream>
using namespace std;
int main(){
    float score;
    cin >> score;
    if (score >= 95)
        cout << 1 << endl;
    else if (score >= 90)
        cout << 2 << endl;
    else if (score >= 85)
        cout << 3 << endl;
    else if (score >= 80)
        cout << 4 << endl;
    else if (score >= 70)
        cout << 5 << endl;
    else if (score >= 60)
        cout << 6 << endl;
    else
        cout << 7 << endl;
    return 0;
}