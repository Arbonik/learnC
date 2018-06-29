#include <stdio.h>
#include <math.h>
 
 int main()
 {
	 char check = '0';
	 printf("Перевести байты в мебибайты - 1\nПеревести мебибайты в байты - 2\n");
	 scanf("%c", &check);
	 long int byte = 0 ;
	 if (check == '1')
	 {
		 printf("Введите байты\n");
		 scanf("%li", &byte);
		 byte/=pow(2,20);
		 printf("%ld",byte);
	  } 
	  if (check == '2')
	 {
		 printf("Введите мебибайты\n");
		 scanf("%li",&byte);
		 byte*=pow(2,20);
		 printf("%ld",byte);
		 
	  } 
	  
		 
 } 
