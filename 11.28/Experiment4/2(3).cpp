#include <iostream>
#include <algorithm> 
using namespace std;
void sortArray(int* arr, int size) {
    sort(arr, arr + size);  
}
int main() {
    int size;
    cout << "请输入数组的元素个数: " << endl;
    cin >> size;
    int* arr = new int[size];
    
    for (int i = 0; i < size; ++i) {
        cout << "arr[" << i << "]: " << endl;
        cin >> arr[i];
    }
    cout << "\n数组元素为：" << endl;
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " " << endl;
    }
    sortArray(arr, size);
    cout << "\n排序后的数组：" << endl;
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " " << endl;
    }
    return 0;
}