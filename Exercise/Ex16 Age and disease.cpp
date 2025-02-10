// find out if the disease is related to ages.
# include <iostream>
using namespace std;
#include <iomanip>
int main(){
    double n;
    int a = 0, b = 0, c = 0, d = 0;    
    cin >> n;    
    int q[100];    
    for (int i = 0; i < n; i++)        
        cin >> q[i];    
    for (int i = 0; i < n; i++){        
        if (q[i] >= 1 && q[i] <= 18) a++;        
        else if (q[i] >= 19 && q[i] <= 35) b++;        
        else if (q[i] >= 36 && q[i] <= 60) c++;        
        else if (q[i] >= 61) d++;    }    
    double a1 = 100*a/n, b1 = 100*b/n, c1 = 100*c/n, d1 = 100*d/n;    
    cout << fixed << setprecision(2);    
    cout << "1-18: " << a1 << "%" << endl;    
    cout << "19-35: " << b1 << "%" << endl;    
    cout << "36-60: " << c1 << "%" << endl;    
    cout << "60-: " << d1 << "%" << endl;
    return 0;}