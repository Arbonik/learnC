#include <stdio.h>
 
 int main()
 {
	 printf("Введите последовательно три стороны\n");
	 int a = 0;
	 int b = 0;
	 int c = 0;
	 scanf("%d", &a); 
	 scanf("%d", &b); 
	 scanf("%d", &c); 
	 if ((a + b > c) && (a + c > b) && (b + c > a))
	 {
		 printf("Треугольник существует\n");
	 }
	 else
	 {
		 printf("Треугольник ne существует\n");
	 }
 } 
