#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;
double squareRoot(double a, double tolerance) {
    if (a < 0) {
        cerr << "����û��ʵ��ƽ����" << endl;
        return -1; 
    }
    double x_n = a;
    double x_n1;
    do {
        x_n1 = 0.5 * (x_n + a / x_n);
        if (fabs(x_n1 - x_n) < tolerance) {
            break;
        }
        x_n = x_n1;
    } while (true);
    return x_n1;
}
int main() {
    double a;
    double tolerance = 1e-5; 
    cout << "������һ����: ";
    cin >> a;
    double result = squareRoot(a, tolerance);
    if (result != -1) {
        cout << a << " ��ƽ����ԼΪ: "
            << setprecision(10) << result << endl;
    }
    tolerance = 1e-10;
    result = squareRoot(a, tolerance);
    if (result != -1) {
        cout << "�ھ��� 1e-10 �£�" << a << " ��ƽ����ԼΪ: "
            << setprecision(10) << result << endl;
    }
    return 0;
}
