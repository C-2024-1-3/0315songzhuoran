#include <iostream>
using namespace std;
int main3()
{
    double a, b, c;
    cout << "请输入三角形的三条边长：";
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) 
    {
        double C = a + b + c;
        cout << "三角形的周长为：" << C << endl;
        if (a == b || a == c || b == c) 
        {
            cout << "这是一个等腰三角形。" << endl;
        }
        else
        {
            cout << "这不是一个等腰三角形。" << endl;
        }
    }
    else 
    {
        cout << "无法构成三角形，请重新输入" << endl;
    }

    return 0;
}
