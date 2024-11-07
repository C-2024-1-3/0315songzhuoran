#include <iostream>
using namespace std;
int main1() 
{
    char ch;
    cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << (char)(ch - 'a' + 'A') << endl; 
    }
    else 
    {
        cout << (int)(ch + 1) << endl; 
    }

    return 0;
}
