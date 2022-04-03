#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double function(double x) {
    return sqrt((1 / x) - 1) - sqrt((1 / x) + 1);
}

double aliasFunction(double x) {
    return -2 / (sqrt((1 / x) - 1) + sqrt((1 / x) + 1));
}

int main() {
    for (float value = 1e-19; value > 1e-21; value -= 1e-21) {
        printf("Wert fuer %e ist: f(x) = %e  || f'(x) = %e \r\n", value, function(value), aliasFunction(value));
    }
    return EXIT_SUCCESS;
}