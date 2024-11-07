#include <iostream>
#include <cctype>
using namespace std;
int main5() 
{
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;
    cout << "请输入一行字符：";
    while ((c = cin.get()) != '\n') 
    {
        if (isalpha(c)) 
        {       
            letters++;
        }
        else if (isspace(c)) {  
            spaces++;

        }
        else if (isdigit(c))
        {  
            digits++;
        }
        else 
        {                 
            others++;
        }
    }
    cout << "字母个数：" << letters << endl;
    cout << "空格个数：" << spaces << endl;
    cout << "数字个数：" << digits << endl;
    cout << "其他字符个数：" << others << endl;
    return 0;
}
