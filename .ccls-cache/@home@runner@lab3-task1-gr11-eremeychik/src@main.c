/* hello.c */
#include <stdio.h>
#include "dop.c"

int main(int argc, char *argv[]) {
    // Проверка наличия аргументов командной строки
    if (argc != 2) {
        printf("Использование: %s <размер массива>\n", argv[0]);
        return 1;
    }

    // Получение размера массива из аргумента командной строки
    int size = atoi(argv[1]);

    // Выделение памяти под массив
    int *numbers = (int*)malloc(size * sizeof(int));

    // Генерация псевдослучайных чисел и заполнение массива
    for (int i = 0; i < size; ++i) {
        numbers[i] = getRandomNumber(1, 100);  // Генерируем числа от 1 до 100
    }

    // Вывод исходных данных
    printf("Исходные данные:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Сортировка массива по количеству единиц в двоичной записи
    qsort(numbers, size, sizeof(int), compareByOnes);

    // Вывод результатов
    printf("Отсортированный массив:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Освобождение выделенной памяти
    free(numbers);

    return 0;
}