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
    cout << "�ܹ������ƻ����: " << total_apples << endl;
    cout << "�ܻ���: " << total_cost << " Ԫ" << endl;
    cout << "ƽ��ÿ�컨��: " << average_cost << " Ԫ" << endl;
    return 0;
}
