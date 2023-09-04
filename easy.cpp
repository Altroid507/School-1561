#include <iostream>
#include "easy.h"

using namespace std;

void itc_name(void) {
    cout << "Michael\n";
}

void itc_fio(void) {
    cout << "Alter\n";
    itc_name();
    cout << "Glebovich\n";

}

int itc_abs(int num) {
    if (num < 0) {
        return num * -1;
    }
    return num;
}

double itc_fabs(double num) {
    if (num < 0) {
        return num * -1.0;
    }
    return num;
}
