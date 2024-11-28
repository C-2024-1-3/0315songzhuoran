#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
        else {
            return true;
        }
    }
}
int main3() {
    int count = 0; 
    int num = 2;  
    while (count < 200) {
        if (is_prime(num)) {
            cout << num << "\t"; 
            count++;
            if (count % 10 == 0) {
                cin.get();
            }
        }
        num++;
    }
    return 0;
}
