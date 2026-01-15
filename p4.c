#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int sum, diff, prod, quo, remain;

    sum = a + b;
    printf("Sum-%d+%d=%d\n", a, b, sum);

    diff = a - b;
    printf("diff-%d-%d=%d\n", a, b, diff);

    prod = a * b;
    printf("prod-%dx%d=%d\n", a, b, prod);

    quo = a / b;
    printf("quotient-%d/%d=%d\n", a, b, quo);

    remain = a % b;
    printf("remainder-%d mod%d=%d\n", a, b, remain);
    return 0;
}