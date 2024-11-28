#include <iostream>
#include <cmath>
using namespace std;
int parseHex(const char* const hexString) {
    int result = 0;
    int length = 0;
    while (hexString[length] != '\0') {
        length++;
    }
    for (int i = 0; i < length; i++) {
        char ch = hexString[i];
        if (ch >= '0' && ch <= '9') {
            result += (ch - '0') * pow(16, length - i - 1);
        }
        else if (ch >= 'A' && ch <= 'F') {
            result += (ch - 'A' + 10) * pow(16, length - i - 1);
        }
        else if (ch >= 'a' && ch <= 'f') {
            result += (ch - 'a' + 10) * pow(16, length - i - 1);
        }
    }
    return result;
}
int main6() {
    char Str[100];
    cout << "输入一个字符串: "<<endl;
    cin >> Str;  
    int Value = parseHex(Str);

    if (Value != -1) {
        cout << Str << " 为 " << Value << endl;
    }
    return 0;
}
