# include <iostream>
using namespace std;
int main(){
    int n, x, y;
    cin >> n >> x >> y;
    if(y / x > n){
        cout << 0;
    }
    else if (y % x == 0) {
        cout << n - y / x;
    } else {
        cout << n - y / x - 1;
    }
return 0;
}