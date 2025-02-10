// Logic operations
/*
Priority of operations:
1. NOT
2. AND
3. OR
*/

// Combined with arithmetic operations, relational operations, and logical operations, we can create complex expressions.
/*
1. Not (!)
2. Arithmetic operations (+, -, *, /, %)
3. Relational operations (==, !=, >, <, >=, <=)
4. Logical operations (&&, ||)
5. Assignment operations (=, +=, -=, *=, /=, %=)
6. Conditional operations (?:); max = (a > b) ? a : b
7. Commas (,)

Optional: Bitwise operations (&, |, ^, ~, <<, >>)
a = 3 & 5; // B011 & B101 = B001 = D1
b = 3 | 5; // B011 | B101 = B111 = D7
c = 3 ^ 5; // B011 ^ B101 = B110 = D6  (XOR operation)
d = ~3; // ~B011 = B100 = D4
e = 3 << 1; // B011 << 1 = B110 = D6 (shift left all binary numbers, if overflow, discard the leftmost bit)
    // If not overflow, << equals to multiply by 2 to the n power.
f = 3 >> 1; // B011 >> 1 = B001 = D1 (shift right all binary numbers, if overflow, discard the rightmost bit)
    // If not overflow, >> equals to divide by 2 to the n power.

*/

/*
For a && b && c: we only need to check b when a is true, and check c when b is true.
For a || b || c: we only need to check b when a is false, and check c when b is false.
*/

# include <iostream>
using namespace std;
int main(){
    int i = 0, a = 1, b = 2, c = 3;
    i = ++a || ++b || ++c;
    cout << i << " " << a << " " << b << " " << c << endl;
    
    // You can use XOR to swap two numbers without using a temporary variable.
    int m = 5, n = 6;
    m = m ^ n;
    n = m ^ n;
    m = m ^ n;
    cout << m << " " << n << endl;

    return 0;
}