/* Suppose you have a positive integer a, and five other positive integers.
Write a program to calculate the sum of integers which are smaller than a.

Input: 6 numbers, the first one is a.
Output: The sum of integers which are smaller than a.
*/
#include <iostream>
using namespace std;
int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    int sum = 0;
    if (b < a) sum += b;
    if (c < a) sum += c;
    if (d < a) sum += d;
    if (e < a) sum += e;
    if (f < a) sum += f;
    cout << sum << endl;
    return 0;
}