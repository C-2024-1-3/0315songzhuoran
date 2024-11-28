#include <iostream>
using namespace std;
int main1() {
    int nums[10];
    int uniquenums[10]; 
    int count = 0; 
    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> nums[i];
    }
    for (int i = 0; i < 10; ++i) {
        bool Unique = true;
        for (int j = 0; j < count; ++j) {
            if (nums[i] == uniquenums[j]) { 
                Unique = false;
                break;
            }
        }
        if (Unique) {
            uniquenums[count] = nums[i]; 
            ++count; 
        }
    }
    cout << "The distinct numbers are:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << uniquenums[i] << " ";
    }
    return 0;
}
