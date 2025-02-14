// How to define a function?
/*
Functions are like:
r = sqrt(100.0);
k = pow(x, y); // x to the power of y
i = strlen(str1);
v = strcmp(str1, str2);
n = atoi(str1);
*/

# include <iostream>
using namespace std;
int global_variable1 = 0; //global variable
int absolute(int n){
    if (n < 0) return (-n);
    else return n;
    return n;
}

float max(float a, float b){
    if (a > b) return a;
    else return b;
}

// Functions can have no return
void delay(int n){
    for (int i = 0; i < n * 10000; i++);
    return;
}

// if you use the name of array as the parameter of functions
void change(int a[]){
    a[0] = 30; a[1] = 50;
}

float min(float, float); // declaration
int main(){
    int m = -123, result = 0; // local variables
    result = absolute(m);
    cout << result;

    int a = 2, b = 3;
    float result = 0;
    result = min(a, b);
    count << result;

    int a[2] = {3,5};
    change(a);
    cout << a[0] << a[1] << endl; // output 30 50
    return 0;
}

float min(float a, float b){
    if (a < b) return a;
    else return b;
}