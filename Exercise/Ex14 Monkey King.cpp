// n monkeys in a circle, calling from 1 to m, the m-th monkey will be expelled
// until only one monkey is left. Find the number of the last monkey. (king)
# include <iostream>
using namespace std;
int succedent[300]; // the one after the current monkey
int precedent[300]; // the one before the current monkey
int main(){
    int n, m;
    while (true) {
        cin >> n >> m;
    if (n == 0 && m == 0)
      break;
    for (int i = 0; i < n - 1; i++) {
      succedent[i] = i + 1;
      precedent[i + 1] = i;
    }
    succedent[n - 1] = 0; // circle
    precedent[0] = n - 1; // circle
    }

    int current = 0;
    while (true) {
      for (int count = 0; count < m-1; count++)
        current = succedent[current];
      int pre = precedent[current];
      int suc = succedent[current];
      // Act as if we skip the current monkey.
      succedent[pre] = suc; // remove the current monkey (expelled)
      precedent[suc] = pre; // remove the current monkey (expelled)
      if (pre == suc) {
        cout << pre+1 << endl;
        break;
      }
      current = suc;
    }

}