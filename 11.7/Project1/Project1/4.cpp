#include <iostream>
#include <iomanip>
using namespace std;
int main4()
{
    unsigned int testUnint = 65534;
    cout << "Output in unsigned int type: " << testUnint << endl;
    cout << "Output in char type: " << static_cast<char>(testUnint) << endl;
    cout << "Output in short type: " << static_cast<short>(testUnint) << endl;
    cout << "Output in int type: " << static_cast<int>(testUnint) << endl;
    cout << "Output in double type: " << static_cast<double>(testUnint) << endl;
    cout << "Output in double type (precision 4): " << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "Output in Hex unsigned int type: " << hex << testUnint << endl;
    cout << "Output in octal unsigned int type: " << oct << testUnint << endl;
    double realNumber =10.56;
    cout << "Real number 10.56 converted to int: " << static_cast<int>(realNumber) << endl;
    system("pause");
    return 0;
}

