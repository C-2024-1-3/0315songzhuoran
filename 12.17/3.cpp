#include <iostream>
using namespace std;
class Box {
private:
    double length;
    double width;
    double height;
    double volume;
public:
    void input() {
        cout << "�����볤��";
        cin >> length;
        cout << "�������";
        cin >> width;
        cout << "������ߣ�";
        cin >> height;
    }
    void calculate() {
        volume = length * width * height;
    }
    void display() {
        cout << "�ó����������Ϊ��" << volume << endl;
    }
};
int main2() {
    Box box1, box2, box3;  
    cout << "�������1���������Ĳ�����" << endl;
    box1.input();
    box1.calculate();
    cout << "\n�������2���������Ĳ�����" << endl;
    box2.input();
    box2.calculate();
    cout << "\n�������3���������Ĳ�����" << endl;
    box3.input();
    box3.calculate();
    cout << "\n��������" << endl;
    cout << "V1";
    box1.display();
    cout << "V2";
    box2.display();
    cout << "V3";
    box3.display();

    return 0;
}