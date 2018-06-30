#include <stdio.h>
 
 int main()
 {
	 int myNumber = rand() % 10 + 1;
	 int userVariant = 16;
	 while (myNumber != userVariant)
	 {
		 printf("Введите ваш вариант");
		 scanf("%d", &userVariant);
		 }
		 printf("Верно!");
 } 
