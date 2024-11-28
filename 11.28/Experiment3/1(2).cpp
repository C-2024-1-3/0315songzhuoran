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
    cout << "请输入第一个自然数 m: ";
    cin >> m;
    cout << "请输入第二个自然数 n: ";
    cin >> n;
    int Result1 = gcd(m, n);
    int Result2;
    lcm(m, n, Result2);
    cout << "最大公约数: " << Result1 << endl;
    cout << "最小公倍数: " << Result2 << endl;
    return 0;
}
