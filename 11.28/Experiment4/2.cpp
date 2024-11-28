#include <iostream>
#include <iomanip>
using namespace std;
void bubbleSort(double list[], int listSize) {
    bool changed;
    do {
        changed = false;  
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                double temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                changed = true;  
            }
        }
    } while (changed);  
}
int main2() {   
    double numbers[10];
    cout << "请输入10个双精度数字：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }
    bubbleSort(numbers, 10);
    cout << "排序后为：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << fixed << setprecision(2) << numbers[i] << " ";  
    }
    return 0;
}
