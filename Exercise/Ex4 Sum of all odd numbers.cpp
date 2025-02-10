// sum of all odd numbers between m and n
#include <iostream>
using namespace std;
int main() {
    int m, n, result = 0;
    cin >> m >> n;
    while (m <= n) {
        // for every odd number between m and n, add it to result
        if (m % 2 == 1)
            result += m;
        m++;
    }
    cout << result << endl;
    return 0;
}
