# include <iostream>
using namespace std;
int main(){
    int annual_salary;
    double growth_rate;
    while (cin >> annual_salary >> growth_rate){
        double house_price = 200;
        double total_income = 0;
        int t;
        for (t = 1; t < 21; t++){
            total_income = t * annual_salary;
            if (total_income >= house_price){
                cout << t << endl;
                break;}
            else{
                house_price = house_price * (1 + growth_rate / 100);}
                continue;}
        if (t == 21) {cout << "Impossible" << endl;}}
    return 0;
}