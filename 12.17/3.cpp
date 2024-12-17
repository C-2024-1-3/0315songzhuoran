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
        cout << "请输入长：";
        cin >> length;
        cout << "请输入宽：";
        cin >> width;
        cout << "请输入高：";
        cin >> height;
    }
    void calculate() {
        volume = length * width * height;
    }
    void display() {
        cout << "该长方柱的体积为：" << volume << endl;
    }
};
int main2() {
    Box box1, box2, box3;  
    cout << "请输入第1个长方柱的参数：" << endl;
    box1.input();
    box1.calculate();
    cout << "\n请输入第2个长方柱的参数：" << endl;
    box2.input();
    box2.calculate();
    cout << "\n请输入第3个长方柱的参数：" << endl;
    box3.input();
    box3.calculate();
    cout << "\n计算结果：" << endl;
    cout << "V1";
    box1.display();
    cout << "V2";
    box2.display();
    cout << "V3";
    box3.display();

    return 0;
}