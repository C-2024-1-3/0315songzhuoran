#include <iostream>
using namespace std;

int main3() {
    const int N = 100;
    bool lockers[N] = { false }; 
    for (int student = 1; student <= N; student++) {
        for (int locker = student - 1; locker < N; locker += student) {
            lockers[locker] = !lockers[locker]; 
        }
    }
    cout << "开着的存物柜编号：";
    for (int i = 0; i < N; i++) {
        if (lockers[i]) {  
            cout << i + 1 << " "; 
        }
    }
    return 0;
}
