#include <iostream>
using namespace std;
int main9()
{
    int total_apples = 0; 
    double total_cost = 0.0; 
    int day = 1;  
    int apples_today = 2; 
    while (total_apples + apples_today <= 100) 
    {
        total_apples += apples_today;  
        total_cost += apples_today * 0.8;  
        if (day >= 2)
 {
            apples_today *= 2; 
        }
        day++;  
    }    
    double average_cost = total_cost / (day - 1);  
    cout << "总共购买的苹果数: " << total_apples << endl;
    cout << "总花费: " << total_cost << " 元" << endl;
    cout << "平均每天花费: " << average_cost << " 元" << endl;
    return 0;
}
