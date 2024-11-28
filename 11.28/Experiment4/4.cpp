#include <iostream>
#include <vector>
using namespace std;
void merge(const vector<int>& list1, const vector<int>& list2, vector<int>& list3) {
    int i = 0, j = 0, k = 0;
    while (i < list1.size() && j < list2.size()) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
    while (i < list1.size()) {
        list3[k++] = list1[i++];
    }
    while (j < list2.size()) {
        list3[k++] = list2[j++];
    }
}
int main4() {
    int size1, size2;
    cout << "Enter list1: "<<endl;
    cin >> size1; 
    vector<int> list1(size1);  
    for (int i = 0; i < size1; i++) {
        cin >> list1[i]; 
    }
    cout << "Enter list2: "<<endl;
    cin >> size2;
    vector<int> list2(size2); 
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];  
    }
    vector<int> list3(size1 + size2); 
    merge(list1, list2, list3);
    cout << "The merged list is: "<<endl;
    for (int i = 0; i < list3.size(); i++) {
        cout << list3[i] << " "<<endl;
    }
    return 0;
}
