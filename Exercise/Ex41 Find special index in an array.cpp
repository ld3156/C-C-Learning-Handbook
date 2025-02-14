// find if there is an i, so that array x[i] = i
# include <iostream>
using namespace std;
void find(int a[], int len) {
    for (int i = 0; i < len; i++) {
        if (a[i] == i) {
            cout << i;    // Print the index
            return;       // Exit the function
        }
    }
    // If we finish the loop without finding any a[i] == i, print 'N'
    cout << "N";
}

int main(){
    int len, a[100];
    cin >> len;
    for (int i = 0; i < len; i++){
        cin >> a[i];}

    find(a, len);
    return 0;
}