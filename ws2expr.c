#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, d;
    
    a=1; b=1; c=5; d=1;
    printf("4.1:\n");
    printf("A: %.2f\n", 3*a/5 + 1/b);
    printf("B: %.2f\n", (3*a + 5*b)/(2 + c));
    printf("C: %.2f\n", 2.0/7 * (pow(4, 4*c) - 5*d));
    printf("D: %.2f\n", sqrt((2 + 8*b)/a));
    printf("E: %.2f\n\n", sqrt(pow(b, 5) - 4*d));
    
    a=9; b=2; c=0; d=1;
    printf("4.2:\n");
    printf("A: %.2f\n", 3*a/5 + 1/b);
    printf("B: %.2f\n", (3*a + 5*b)/(2 + c));
    printf("C: %.2f\n", 2.0/7 * (pow(4, 4*c) - 5*d));
    printf("D: %.2f\n", sqrt((2 + 8*b)/a));
    printf("E: %.2f\n\n", sqrt(pow(b, 5) - 4*d));
    
    a=0; b=3; c=3; d=3;
    printf("4.3:\n");
    printf("A: %.2f\n", 3*a/5 + 1/b);
    printf("B: %.2f\n", (3*a + 5*b)/(2 + c));
    printf("C: %.2f\n", 2.0/7 * (pow(4, 4*c) - 5*d));
    printf("D: %.2f\n", sqrt((2 + 8*b)/a));
    printf("E: %.2f\n", sqrt(pow(b, 5) - 4*d));
    
    return 0;
}
