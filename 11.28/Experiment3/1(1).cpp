#include <iostream>
using namespace std;
int gcd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}
int main1() {
    int m, n;
    cout << "�������һ����Ȼ�� m: ";
    cin >> m;
    cout << "������ڶ�����Ȼ�� n: ";
    cin >> n;
    int result = gcd(m, n);
    cout << "���Լ��: " << result << endl;

    return 0;
}
