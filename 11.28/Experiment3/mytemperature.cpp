#include "mytemperature.h"

double celsius_to_fah(double C) {
    return (C * 9.0 / 5.0) + 32.0;
}

double fahrenheit_to_cels(double F) {
    return (F - 32.0) * 5.0 / 9.0;
}
