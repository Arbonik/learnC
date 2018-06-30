#include <stdio.h>
 
 int main()
 {
	 printf("Введите последовательно радиус окружности и координаты точки\n");
	 float r = 0;
	 float x = 0;
	 float y = 0;
	 scanf("%f", &r); 
	 scanf("%f", &x);
	 scanf("%f", &y); 
	 if (x * x + y * y == r * r)
	 {
		 printf("Точка принадлежит окружности\n");
	 }
	 else
	 {
		 printf("Точка не принадлежит окружности\n");
	 }
 } 
