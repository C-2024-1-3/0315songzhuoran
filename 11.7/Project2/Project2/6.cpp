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
    cout << "请输入第一个正整数a: ";
    cin >> a;
    cout << "请输入第二个正整数b: ";
    cin >> b;
    if (a <= 0 || b <= 0) {
        cout << "请输入正整数" << endl;
        return 1; 
    }
    cout << a << " 和 " << b << " 的最大公约数是: " << gcd(a, b) << endl;
    cout << a << " 和 " << b << " 的最小公倍数是: " << lcm(a, b) << endl;
    return 0;
}
