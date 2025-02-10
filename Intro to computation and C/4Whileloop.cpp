// An example to show how to use while loop in C++ programming
// 100 dollars to buy 100 chickens Problem
# include <iostream>
using namespace std;
int main(){
    int n = 100;
    int i = 0;
    while (i <= n){
        int j = 0;
        while (j <= n){
            int k = 0;
            while (k <= n){
                if (i + j + k == n && 0.5 * i + 2 * j + 3 * k == 100){
                    cout << "Chickens: " << i << " Roosters: " << j << " Hens: " << k << endl;
                }
                k++;
            }
            j++;
        }
        i++;
    }
    return 0;
}