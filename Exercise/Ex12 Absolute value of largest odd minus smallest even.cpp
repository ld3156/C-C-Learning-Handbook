# include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int main() {
	int input[6];
	int odd[6];
	int even[6];
	int j = 0, k = 0;
	int maxOdd, minEven;
	int output;

	for (int i = 0; i < 6; i++) {
		cin >> input[i];
	}

	for (int i = 0; i < 6; i++) {
		if (input[i] % 2 != 0) {
			odd[j] = input[i];
			j++;
		}
		else {
			even[k] = input[i];
			k++;
		}
	}
	
	maxOdd = odd[0];
	minEven = even[0];

	for (int m = 0; m < j ; m++) {
		if (odd[m] > maxOdd) {
			maxOdd = odd[m];
		}
	}

	for (int n = 0; n < k ; n++) {
		if (even[n] < minEven) {
			minEven = even[n];
		}
	}

	if (maxOdd >= minEven)
		output = maxOdd - minEven;
	else
		output = minEven - maxOdd;

	cout << output << endl;
	return 0;

}