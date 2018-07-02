#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void printArray(int* array, size_t size) // вывод массива на экран
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d\t%d\n", i, array[i]); 
    }
    printf("\n"); 
}

int main(int argc, char **argv)
{
    srand((unsigned)time(NULL));
    int place = 0; // хранит положение минимального значения в массиве
    int minValue = -50; // хранит значение максимального отрицательного числа
    size_t size = 0; // размер массива
    
    do
    {
        printf("Введите размер массива (от 4 до 128): \n");
        scanf("%lu", &size);
    }
    while (size < 4 || size > 128);
	int* array = calloc(size, sizeof(int));
    for (int i = 0; i < size; ++i)
    {
        array[i] = rand()%100 - 50; // заполнение массива случайными числами
    }
    printArray(array, size);//вывод первоначального состояния массива
    for (int i = 0; i < size; ++i)
    {
        if ( (array[i] > minValue) && (array[i] < 0) )
        {
            minValue = array[i];
            place = i;
        }
    }    
    array[place] = array[size - 1]; // замена минимального числа на последнее
    array[size-1] = minValue;
    printArray(array, size); // вывод массива после замены
    
    
	return 0;
}
