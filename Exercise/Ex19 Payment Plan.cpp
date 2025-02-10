// if i want to pay a specific amount of money
// and I will try to use the large note as much as possible
// then I will use the small note
// how many bills will I need separately?
# include <iostream>
using namespace std;
int main(){
    int value;
    cin >> value;

    int a, b, c, d, e, f;
    a = value / 100;
    value = value % 100;
    b = value / 50;
    value = value % 50;
    c = value / 20;
    value = value % 20;
    d = value / 10;
    value = value % 10;
    e = value / 5;
    value = value % 5;
    f = value / 1;

    cout << a << endl << b << endl << c << endl << d << endl << e << endl << f << endl;
return 0;
}