// Suppose we have 100 dollars and we need to buy 100 chickens.
// 0.5 dollar for a chick, 2 dolloars for a rooster, and 3 dollars for a hen.
// Write a program to find all possible solutions.
# include <iostream>
using namespace std;
int main(){
    int n = 100;
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= n; j++){
            for (int k = 0; k <= n; k++){
                if (i + j + k == n && 0.5 * i + 2 * j + 3 * k == 100){
                    cout << "Chickens: " << i << " Roosters: " << j << " Hens: " << k << endl;
                }
            }
        }
    }
    return 0;
}