// find out how many a, e, i, o, u in the sentence
# include <iostream>
using namespace std;
int main(){
    char str[80];
    cin.getline(str, 80);
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    for (int j = 0; str[j] != '\0'; j++){
        if (str[j] == 'a') a ++;
        if (str[j] == 'e') e ++;
        if (str[j] == 'i') i ++;
        if (str[j] == 'o') o ++;
        if (str[j] == 'u') u ++;
        }
    cout << a <<' '<< e <<' '<< i <<' '<< o <<' ' << u;
return 0;
}