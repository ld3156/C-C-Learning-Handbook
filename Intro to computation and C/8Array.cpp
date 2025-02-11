// Array can be used to store multiple values of the same type.
// We will introduce 1D array, 2D array, 3D array, etc.

# include <iostream>
# include <iomanip>
# include <math.h>
using namespace std;
# define N 4

int main(){
    // 1D array
    int a[N] = {1, 2, 3, 4};
    cout << a[0] << a[1] << a[2] << a[3] << endl;

    int c[N] = {0}; // common way to initialize an array
    cout << c[0] << c[1] << c[2] << c[3] << endl;
    // But you cannot initialize using more than N elements

    // 2D array
    int b[4][3] = {
        {1, 2, 3},
        {5, 6, 7},
        {9, 10, 11},
        {13, 14, 15}
    }; // 4 * 3 array, 4 rows and 3 columns

    // if I want to print the whole array
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout << setw(3) << b[i][j] << " ";
        }
        cout << endl;
    }

    // 3D array
    int d[2][3][4] = {
        {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12}
        },
        {
            {13, 14, 15, 16},
            {17, 18, 19, 20},
            {21, 22, 23, 24}
        }
    }; // 2 * 3 * 4 array, 2 2D arrays, each with 3 rows and 4 columns
    return 0;
}

/*
Practice: I will give you 100 numbers, all bewtween 0 and 9. 
            Count the existence of each number.
Answer: int num, count[100] = {0}; // initialize all elements to 0
         for(int i = 0; i < 100; i++){
             cin >> num;
             count[num]++;
         }

Practice: Find all the prime numbers between 1 and 100.

Answer1: bool Prime = true; double num;
                for(int i = 2; i <= sqrt(num); i++){
                    if(num % i == 0){
                        Prime = false;
                        break;
                    }
                }
                if(Prime) cout << num << " ";
Answer2 (Eratosthenes Method):
             int sum = 0, a[100] = {0};
                for(int i = 2; i < sqrt(100.0); i++){
                    sum = i;
                    if a[sum] == 0){
                        while (sum < 100){
                            sum += i;
                            if (sum < 100) a[sum] = 1;
                        }
                    }
                }
            for (int i = 2; i < 100; i++){
                if (a[i] == 0) cout << i << " ";
            }
*/