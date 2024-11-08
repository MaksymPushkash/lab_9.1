//////////////////////////////////////////////////////////////////////////////
// sum.cpp
// файл реалізації функції
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 0;
    a = 1 / x; // початкове значення доданку
    s = a;

    do {
        n++;
        dod(); // виклик процедури обчислення доданку
        s += a;
    } while (fabs(a) > eps);
}