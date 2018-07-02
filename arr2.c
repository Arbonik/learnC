#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void printArray(float* array, size_t size) // вывод массива на экран
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
             printf("%0.2f\t", array[i * size + j]);
        }
    printf("\n"); 
    }
}

void fillArray(float* array, size_t size)  // заполнение массива случайными числами
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
             array[i * size + j] = (float)(rand()%10000 - 5000) / 100; // дробная часть +
        }
    printf("\n"); 
    }
}

void shufflingArray(float* array, size_t size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
             if (i == j)
             {
                 array[i * size + j] = abs(array[i * size + j]);
             }
             else
             {
                 array[i * size + j] = -array[i * size + j];
             }
        }
    printf("\n"); 
    }
}

int main(int argc, char **argv)
{
    srand((unsigned)time(NULL));
    size_t size = 0; // размер массива
    
    do
    {
        printf("Введите размер массива (от 4 до 128): \n");
        scanf("%lu", &size);
    }
    while (size < 4 || size > 128);
	float* array = calloc(size * size, sizeof(float));
    fillArray(array, size); 
    printArray(array, size);//вывод первоначального состояния массива
    shufflingArray(array, size);
    printArray(array, size);//вывод обработанного состояния массива
    return 0;
}
