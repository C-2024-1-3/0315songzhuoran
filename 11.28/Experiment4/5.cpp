#include <iostream>
#include <cstring> 
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1); 
    int len2 = strlen(s2); 
    if (len1 > len2) {
        return -1;
    }
    for (int i = 0; i <= len2 - len1; i++) {
        bool match = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i;
        }
    }
    return -1; 
}
int main5() {
    char s1[100], s2[200];
    cout << "Enter the first string: ";
    cin.getline(s1, 100);
    cout << "Enter the second string: ";
    cin.getline(s2, 200);
    int result = indexOf(s1, s2);
    cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << endl;
    return 0;
}
