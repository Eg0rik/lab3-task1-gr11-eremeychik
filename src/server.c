#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

// Функция для подсчета количества единиц в двоичной записи числа
int countOnes(int num) {
    int count = 0;
    while (num > 0) {
        count += num % 2;
        num /= 2;
    }
    return count;
}

// Функция для сравнения двух чисел по количеству единиц в их двоичной записи
int compareByOnes(const void *a, const void *b) {
    return countOnes(*(int*)a) - countOnes(*(int*)b);
}

// Функция для генерации псевдослучайных чисел в заданном диапазоне
int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}