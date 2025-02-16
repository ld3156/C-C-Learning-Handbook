/*
common recursion method:

int fact(int n)
{
    if (n == 1) return 1;
    else return n * fact(n -1);
}

Def: A function which will use itself directly or indirectly
*/

#include <iostream>
using namespace std;
int recur(){
    char c;
    c = cin.get();
    if (c != '\n') recur();
    cout << c;
    return 0;
}

// Usage of recursion: Cut Pizza
int q(int n){ 
    if (n = 0)
        return 1;
    else
        return (n + q(n -1));
}

// Fibonacci squence, we know fib(n) = fib(n-1) + fib(n-2)
int fib(int n)
{
    if (n == 1) return 1;
    if (n == 2) return 1;
    else
        return (fib(n -1) + fib(n -2));
}


int main()
{
    recur(); // when you input abc, you will get cba as output.
    cout << q(4) << endl; // cut pizza (# of pieces you get if you cut n times)
    cout << fib(10) << endl; // Fib sequence
    return 0;
}

