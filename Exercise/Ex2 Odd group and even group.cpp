// Divide 10 numbers into odd and even numbers
# include <iostream>
using namespace std;
int main(){
    cout << "Input 10 numbers"  << endl;
    int number[10];
    for (int i = 0; i < 10; i++){
        cin >> number[i];
    }
    int odd[10], even[10];
    int numodd = 0;
    int numeven = 0;

    for (int i = 0; i < 10; i++){
        if (number[i] % 2 == 0){
            even[numeven] = number[i];
            numeven++;
        } else {
            odd[numodd] = number[i];
            numodd++;
        }
    }
    for (int i = 0; i < numodd; i++){
        cout << "Odd number: " << odd[i] << endl;
    }
    for (int i = 0; i < numeven; i++){
        cout << "Even number: " << even[i] << endl;
    }
    return 0;
}