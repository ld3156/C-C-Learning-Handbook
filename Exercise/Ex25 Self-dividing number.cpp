// Self-dividing number is like:
// 21 % (2 + 1) == 0
# include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 10; i <= n; i++){
        int selfsum = 0;
        selfsum += i / 10;
        selfsum += i % 10;
        if (i % selfsum == 0)
            cout << i << endl;
    }
    return 0;
}