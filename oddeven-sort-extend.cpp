// This is a second way to solve the problem of odd even sorting.
# include <iostream>
using namespace std;
int main(){
    int a[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> a[i];
    }
    // bubble sort, if wrong order, swap
    for (int i =0; i <9; i++){
        for (int j = 1; j <10 - i; j++){
            // in addition to ordinary bubble sort, we check if the left is odd and right is even
            // if the left is even and right is odd, we swap
            bool leftiseven = a[j-1] % 2 == 0;
            bool rightiseven = a[j] % 2 == 0;
            if ((leftiseven && !rightiseven) || 
                (leftiseven == rightiseven && a[j -1] > a[j])) {
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