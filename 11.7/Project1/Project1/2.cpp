    #include<iostream>
    using namespace std;
    int main2() 
    {
        const double PI = 3.1415926;
        double R, H, V;
        cout << "请输入圆锥底的半径：";
        cin >> R;
        cout << "请输入圆锥的高度：";
        cin >> H;
        V = (1.0 / 3) * PI * R * R * H;
        cout << "圆锥的体积是：" << V << endl;

        return 0;
    }

