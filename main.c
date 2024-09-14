#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a;
    printf("Enter the value of a: ");
    scanf("%lf",&a);
    double expression1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
    double expression2 = 4 * cos(a / 2) * cos((5 * a) / 2) * cos(4 * a);
    printf("cos(a) + cos(2a) + cos(6a) + cos(7a)= %lf\n", expression1);
    printf("4 * cos(a) + cos(a/2) + cos(5a/2) + cos(4a)= %lf\n", expression2);
    return 0;
}