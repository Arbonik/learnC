#include <stdio.h>
 
 int main()
 {
	 printf("Введите последовательно радиус окружности и координаты точки\n");
	 int r = 0;
	 int x = 0;
	 int y = 0;
	 scanf("%d", &r); 
	 scanf("%d", &x);
	 scanf("%d", &y); 
	 if (x * x + y * y == r * r)
	 {
		 printf("Точка принадлежит окружности\n");
	 }
	 else
	 {
		 printf("Точка не принадлежит окружности\n");
	 }
 } 
