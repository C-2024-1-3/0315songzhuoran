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
        cout << "当前坐标为：(" << x << "," << y << ")" << endl;
    }
};
int main() {
    Point p;
    cout << "初始";
    p.display(); 
    cout << "\n将坐标移动(10,20)" << endl;
    p.setPoint(10, 20);
    cout << "移动后";
    p.display(); 
    cout << "\n将坐标移动(-5,15)" << endl;
    p.setPoint(-5, 15);
    cout << "移动后";
    p.display();  

    return 0;
}