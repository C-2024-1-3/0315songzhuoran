#include <iostream>
using namespace std;
int main4()
{
    double num1, num2;
    char op;
    cout << "�������������ֺͷ��ţ�";
    cin >> num1 >> op >> num2 ;
    switch (op)
    {
    case '+':
        cout << "�����" << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
        break;
    case '-':
        cout << "�����" << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
        break;
    case '*':
        cout << "�����" << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "���󣺳�������Ϊ 0" << endl;
        }
        else
        {
            cout << "�����" << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
        }
        break;
    case '%':
    default:
        cout << "���󣺷Ƿ������" << endl;
    }
    return 0;
}
