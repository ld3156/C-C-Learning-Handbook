# include <iostream>
using namespace std;
int main(){
    char str[100];
    int num = 0, flag = 0;
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == ' '){
            flag = 0;
            continue;
        }
        if (flag == 0){
            num++;
            flag = 1;
        }
    }
    cout << num;
    return 0;
}