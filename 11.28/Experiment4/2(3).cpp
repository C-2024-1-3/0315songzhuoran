#include <iostream>
#include <algorithm> 
using namespace std;
void sortArray(int* arr, int size) {
    sort(arr, arr + size);  
}
int main() {
    int size;
    cout << "�����������Ԫ�ظ���: " << endl;
    cin >> size;
    int* arr = new int[size];
    
    for (int i = 0; i < size; ++i) {
        cout << "arr[" << i << "]: " << endl;
        cin >> arr[i];
    }
    cout << "\n����Ԫ��Ϊ��" << endl;
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " " << endl;
    }
    sortArray(arr, size);
    cout << "\n���������飺" << endl;
    for (int i = 0; i < size; ++i) {
        cout << *(arr + i) << " " << endl;
    }
    return 0;
}