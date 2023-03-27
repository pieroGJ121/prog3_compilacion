#include <iostream>
#include "sumar.h"
#include "restar.h"

int main() {
    auto x = fn_sumar(10, 20);
    auto y = fn_restar(20, 40);
    auto total = x + y;
    return 0;
}
