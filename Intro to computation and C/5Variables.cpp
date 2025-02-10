// Here we want to see how to use variables in C and C++.
# include <iostream>
using namespace std;
int main(){

int a = 5; // Computer will find a memory location and store 5 in it.
// Then, a is tied to the first address of the memory location.


// We can use bool, char, int, float, double, void, etc.

// First, we look at int, short and long.
long b = 1234567890; // long is used to store large numbers.
short c = 1234; // short is used to store small numbers.

cout << "size of int = " << sizeof(a) << endl; // This will print the size of the variable a.
cout << "size of long = " << sizeof(b) << endl;
cout << "size of short = " << sizeof(c) << endl;

// If you want to chech the binary of a number, you can check the hex instead.
a = -123;
cout << "dec of a = " << dec << a << endl;
cout << "hex of a = " << hex << a << endl; // This will print the hex of the variable a.

// If you want to input a hex number
a = 0x1A; // This is how you input a hex number.
cout << "dec a = " << dec << a << endl;
cout << "hex a = " << hex << a << endl;

signed int d = 0x80000000;
cout << "largest signed int d = " << dec << d << endl;

// Next, we look at float and double.
float e = 123.123; // 32 bit, 7 decimal places.
double f = 123.123; // 64 bit, 15 decimal places.
// When calculating, avoiding adding a large float to a small float.

// Next, we look at char.
char g = 64; // @; 8 bit, 1 byte. Don't use "", it is for string.
int h = 'Z'; // ASCII code, 90
int i = h - g; // 90 - 64 = 26
char k = 6 + 256; // 6 + 256 = 6
cout << g << " " << h << " " << i << " " << k << endl;
cout << " this is the first line\nthis is the second line \\" << endl; // \n is for new line.

// Then, we look at bool.
bool b1 = true; // 1
bool b2 = false; // 0

// Finally, we look at constant variables.
const double PI = 3.14159265358979323846; // This is a constant variable.
cout << "PI = " << PI << endl;
// for constant,
a = 10000L; // This is a long int.
b = -0x88abL; // This is a long int. hex
c = 123U; // This is an unsigned int.
i = 0777LU; // This is an unsigned long int. octal

}