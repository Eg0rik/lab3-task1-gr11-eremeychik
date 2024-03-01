/* hello.c */
#include <stdio.h>
#include <stdlib.h>

// Функция для подсчета количества единиц в двоичной записи числа
int countOnes(int num) {
    int count = 0;
    while (num > 0) {
        count += num % 2;
        num /= 2;
    }
    return count;
}

void main (void)
{
	printf ("Hello World\n");
	printf ("Goodbye World\n");
}
