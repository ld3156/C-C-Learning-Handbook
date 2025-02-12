/*
char a[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
char b[10] = {'k', 'l', 'm', 'n', 'o'}; // then, b[5] to b[9] are initialized to \0
char c[] = {'C', 'h', 'i', 'c', 'a', 'g', 'o', '\0'};
char d[] = "China"; // then, d[5] is initialized to \0

All strings are null-terminated, 
    which means that the last character of the string is \0.

Which means, char e[5] = "China" is not a valid declaration, 
    because the size of the array is not enough to store the null-terminated string.

Notice that, you can only define a char[] when declaration, 
you can't assign a string literal to a char[] array after its declaration.

    You cannot!
    str1[] = "China"; // error
    str1 = "China"; // error
    str2 = str1; // error

If you want to replicate a string array, you should use loop to copy each element.

    char str1[] = "China";
    char str2[6];
    for (int i = 0; i < 6; i++) {
        str2[i] = str1[i];
    }

For output, string array can be output simply by
cout << str1 << endl;

For 2D array, you can define a 2D array of strings like this:
    char str[3][10] = {"China", "USA", "UK"};
*/

/*
Input string array using cin
*/

# include <iostream>
using namespace std;
int main(){
    char c;
    cout << "Enter a sentence: ";
    while (cin >> c){  
    // remember there is a buffer, so you need to press enter to flush the buffer
        cout << c; 
    }
    // if you want to terminate, use control + Z
    return 0;
}

/*
You can also input a char using cin.get()

cin.get(ch, 10, 'o');
1. It reads 10 characters or until it encounters 'o'.
2. If not encounter 'o', it will read 9 characters and append a '\0' at the end.

cin.getline(ch, 10, 'o');
Notice that, getline() will put the cursor after 'o'. 
If you have a program like:
    int n = 0;
    cin >> n;
    cin.get(); // to flush the enter after you input n
    for (int i = 0; i < n; i++) {
        cin.getline(ch, 10); // read a line
    }
*/

int main(){
    char c;
    cout << "Enter a sentence: ";
    while (cin.get(c)){  
    // This method can read space and enter. Which is different from cin >> c
        cout << c; 
    }
    // if you want to terminate, use control + Z
    return 0;
}

/*
When you want to output, you can use cout
However, you have to make sure the string is null-terminated.
otherwise, it will output wrong content.
*/
