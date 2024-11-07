#include <iostream>
using namespace std;
int main4()
{
    double num1, num2;
    char op;
    cout << "请输入两个数字和符号：";
    cin >> num1 >> op >> num2 ;
    switch (op)
    {
    case '+':
        cout << "结果：" << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
        break;
    case '-':
        cout << "结果：" << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
        break;
    case '*':
        cout << "结果：" << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "错误：除数不能为 0" << endl;
        }
        else
        {
            cout << "结果：" << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
        }
        break;
    case '%':
    default:
        cout << "错误：非法运算符" << endl;
    }
    return 0;
}
