#include <iostream>
using namespace std;
static int gcd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}
void lcm(int m, int n, int& result) {
    result = (m * n) / gcd(m, n);
}
int main2() {
    int m, n;
    cout << "�������һ����Ȼ�� m: ";
    cin >> m;
    cout << "������ڶ�����Ȼ�� n: ";
    cin >> n;
    int Result1 = gcd(m, n);
    int Result2;
    lcm(m, n, Result2);
    cout << "���Լ��: " << Result1 << endl;
    cout << "��С������: " << Result2 << endl;
    return 0;
}
