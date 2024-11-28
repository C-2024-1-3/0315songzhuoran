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
    cout << "请输入第一个自然数 m: ";
    cin >> m;
    cout << "请输入第二个自然数 n: ";
    cin >> n;
    int result = gcd(m, n);
    cout << "最大公约数: " << result << endl;

    return 0;
}
