#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>

double sumOfArray(double array[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum;
}

double maxOfArray(double array[], int size) {
    double max = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

double minOfArray(double array[], int size) {
    double min = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

double productOfArray(double array[], int size) {
    double product = 1.0;
    for (int i = 0; i < size; ++i) {
        product *= array[i];
    }
    return product;
}

int main() {
    int size;

    printf("Введіть розмір масиву: ");
    scanf_s("%d", &size);

    double* array = (double*)malloc(size * sizeof(double));

    if (array == 0) {
        printf("Не вдалося виділити пам'ять\n");
        return 1;
    }

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < size; ++i) {
        printf("Елемент %d: ", i + 1);
        scanf_s("%lf", &array[i]);
    }

    printf("Сума елементів масиву: %lf\n", sumOfArray(array, size));
    printf("Максимальний елемент масиву: %lf\n", maxOfArray(array, size));
    printf("Мінімальний елемент масиву: %lf\n", minOfArray(array, size));
    printf("Добуток елементів масиву: %lf\n", productOfArray(array, size));

    free(array);

    return 0;
}