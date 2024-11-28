#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main() {
  
    cout << fixed << setprecision(2);
    cout << "Celsius    Fahrenheit   |   Fahrenheit       Celsius" << endl;

    for (double celsius = 40.0, fahrenheit = 120.0; celsius >= 31.0,fahrenheit>=30.0;
        celsius -= 1.0, fahrenheit -= 10.0) {
        double F = celsius_to_fah(celsius); 
        double C = fahrenheit_to_cels(fahrenheit); 
        
        cout << celsius << "       " << F << "        |   "
            << fahrenheit << "             " <<C << endl;
    }
    return 0;
}
