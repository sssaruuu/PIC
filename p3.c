#include <stdio.h>
int main()
{
    int num = 10;
    int x, y;
    printf("Original value of num: %d\n", num);
    num++;
    printf("After unary plus (num++) %d\n", num);
    num--;
    printf("After unary minus (num--) %d\n", num);

    x = ++num; // Pre increment
    printf("After pre-increment (++num), num: %d, x: %d\n", num, x, y);

    y = num++; // Post increment
    printf("After pre-increment (++num), num: %d, x: %d\n", num, x, y);
}