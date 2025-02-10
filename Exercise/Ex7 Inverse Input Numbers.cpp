// How do you inverse your input array?
#include <iostream>
using namespace std;
int a[100];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i<n; i++)
        cin >> a[i];
    while (n--) { // n = n - 1 and n >= 0
        cout << a[n];
        if (n > 0) cout << " "; // if n > 0, print a space
    }
    return 0;
}