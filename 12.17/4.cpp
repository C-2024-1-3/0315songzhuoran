#include <iostream>
using namespace std;
class Student {
private:
    int id;      
    float score; 
public:
    Student(int i = 0, float s = 0) {
        id = i;
        score = s;
    }
    void input() {
        cout << "请输入学号：";
        cin >> id;
        cout << "请输入成绩：";
        cin >> score;
    }
    float getScore() {
        return score;
    }
    int getId() {
        return id;
    }
};
void max(Student* p) {
    float maxScore = p[0].getScore(); 
    int maxId = p[0].getId();         
    for (int i = 1; i < 5; i++) {
        if (p[i].getScore() > maxScore) {
            maxScore = p[i].getScore();
            maxId = p[i].getId();
        }
    }
    cout << "\n成绩最高的学生学号为：" << maxId << endl;
    cout << "最高成绩为：" << maxScore << endl;
}
int main3() {
        Student stud[5]; 
        cout << "请输入5个学生的学号和成绩：" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "\n第" << i + 1 << "个学生：" << endl;
            stud[i].input();
        }
        max(stud); 
        return 0;
    }