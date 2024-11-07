#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b){
    return a * b / gcd(a, b);
}

int main6() {
    int a, b;
    cout << "�������һ��������a: ";
    cin >> a;
    cout << "������ڶ���������b: ";
    cin >> b;
    if (a <= 0 || b <= 0) {
        cout << "������������" << endl;
        return 1; 
    }
    cout << a << " �� " << b << " �����Լ����: " << gcd(a, b) << endl;
    cout << a << " �� " << b << " ����С��������: " << lcm(a, b) << endl;
    return 0;
}
