// find the kth largest number in an array. without sorting.
// we can use every number in the array and calculate each difference with other numbers
// if you can only find k-1 positive difference, then this number is the kth largest number.
# include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] - a[j] < 0)
                count++;
        }
        if (count == k-1) {
            cout << a[i] << endl;
            break;
        }
    }
    return 0;
}