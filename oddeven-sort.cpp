// Input 10 integers, sort then in ascending order, odd first and then even numbers.
#include <iostream>
using namespace std;
int main() {
    int a[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    // first we put odd numbers in the left and even in the right
    int l = 0, r = 9;
    while (l <= r) {
        bool leftisodd = a[l] % 2 == 1;
        bool rightiseven = a[r] % 2 == 0;
        if (leftisodd) {
            l++;
        } else if (rightiseven) {
            r--;
        } else if (!leftisodd && !rightiseven) {
            int temp = a[l];
            a[l] = a[r];
            a[r] = temp;
            l++;
            r--;
        }
    }
    // bubble sort, ascending order, for odd numbers first
    int start = 0, end = l;
    for (int i = start; i < end -1; i++) {
        for (int j = start + 1; j < start + end - i; j++) {
            if (a[j-1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    // bubble sort, ascending order, for even numbers
    start = l, end = 10;
    for (int i = start; i < end -1; i++) {
        for (int j = start + 1; j < start + end - i; j++) {
            if (a[j-1] > a[j]) {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
    // output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    return 0;
}