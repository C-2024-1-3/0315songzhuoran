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
        cout << "������ѧ�ţ�";
        cin >> id;
        cout << "������ɼ���";
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
    cout << "\n�ɼ���ߵ�ѧ��ѧ��Ϊ��" << maxId << endl;
    cout << "��߳ɼ�Ϊ��" << maxScore << endl;
}
int main3() {
        Student stud[5]; 
        cout << "������5��ѧ����ѧ�źͳɼ���" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "\n��" << i + 1 << "��ѧ����" << endl;
            stud[i].input();
        }
        max(stud); 
        return 0;
    }