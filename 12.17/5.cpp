#include <iostream>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    Point() {
        x = 60;
        y = 80;
    }
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display() {
        cout << "��ǰ����Ϊ��(" << x << "," << y << ")" << endl;
    }
};
int main() {
    Point p;
    cout << "��ʼ";
    p.display(); 
    cout << "\n�������ƶ�(10,20)" << endl;
    p.setPoint(10, 20);
    cout << "�ƶ���";
    p.display(); 
    cout << "\n�������ƶ�(-5,15)" << endl;
    p.setPoint(-5, 15);
    cout << "�ƶ���";
    p.display();  

    return 0;
}