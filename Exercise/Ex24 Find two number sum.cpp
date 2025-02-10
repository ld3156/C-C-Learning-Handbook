// Find out in an array, if there are 2 numbers that sum up to given number x.
# include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int q[1000];
    for (int i = 0; i < n; i++)
        cin >> q[i];
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (q[i] + q[j] == k){
                cout << "yes" << endl;
                return 0;
            }
    cout << "no" << endl;
    return 0;
}