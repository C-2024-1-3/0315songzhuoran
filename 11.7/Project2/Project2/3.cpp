#include <iostream>
using namespace std;
int main3()
{
    double a, b, c;
    cout << "�����������ε������߳���";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) 
    {
        double C = a + b + c;
        cout << "�����ε��ܳ�Ϊ��" << C << endl;
        if (a == b || a == c || b == c) 
        {
            cout << "����һ�����������Ρ�" << endl;
        }
        else
        {
            cout << "�ⲻ��һ�����������Ρ�" << endl;
        }
    }
    else 
    {
        cout << "�޷����������Σ�����������" << endl;
    }

    return 0;
}
