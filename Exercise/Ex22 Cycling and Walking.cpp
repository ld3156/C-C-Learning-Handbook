/* We have n values, representing n different distances. 
 We want to know for each distance, whether it is faster to walk or cycle.
 If you walk, you walk at 1.2 meter per second.
 If you cycle, you cycle at 3 meter per second. But you need 50 seconds to lock and unlock your bike.
*/

# include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int q[100];
    for (int i = 0; i < n; i++)
        cin >> q[i];
    for (int i = 0; i < n; i++){
        double walk = q[i] / 1.2;
        double cycle = 50 + q[i] / 3.0;
        if (walk < cycle)
            cout << "Walk" << endl;
        else if (walk > cycle)
            cout << "Bike" << endl;
        else
            cout << "All" << endl;
    }
    return 0;
}