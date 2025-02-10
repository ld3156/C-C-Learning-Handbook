#include <iostream>
using namespace std;

int main() {
    int n, a[1000];
    cout << "Enter the number of elements: ";
    cin >> n;
    // input the nth element
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // bubble sort, ascending order
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n - i; j++) {
            if (a[j-1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    // output the sorted array
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";}
    return 0;
}