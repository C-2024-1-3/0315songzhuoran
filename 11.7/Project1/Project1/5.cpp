#include <iostream>
#include <iomanip>  
using namespace std;

int main() 
{
    double F, C;
    cout << "请输入华氏温度：";
    cin >> F;
    C = (5.0 / 9) * (F - 32);
    cout << "摄氏温度是：";
    cout << fixed << setprecision(2) << C << endl;
    return 0;
}
