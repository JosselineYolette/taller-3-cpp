
#include <iostream>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}
