#include <iostream>
#include <iomanip>  
using namespace std;

int main() 
{
    double F, C;
    cout << "�����뻪���¶ȣ�";
    cin >> F;
    C = (5.0 / 9) * (F - 32);
    cout << "�����¶��ǣ�";
    cout << fixed << setprecision(2) << C << endl;
    return 0;
}
