#include <iostream>
using namespace std;
void c(int n){
    if (n == 1) cout << "End";
    else if (n % 2 == 1) {
        int new_n;
        new_n = n * 3 + 1;
        cout << n << "*3+1=" << new_n << endl;
        c(new_n);}
    else if (n % 2 == 0) {
        int new_n;
        new_n = n / 2;
        cout << n << "/2=" << new_n << endl;
        c(new_n);
    }
    }

int main(){
    int number;
    cin >> number;
    c(number);
    return 0;
}