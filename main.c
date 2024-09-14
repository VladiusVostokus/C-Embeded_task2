#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a;
    printf("Enter the value of a: ");
    scanf("%lf",&a);
    double expression1 = cos(a) + cos(a * 2) + cos(a * 6) + cos(a * 7);
    printf("cos(a) + cos(2a) + cos(6a) + cos(7a)= %lf\n", expression1);
    return 0;
}