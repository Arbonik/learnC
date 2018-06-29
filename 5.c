#include <stdio.h>
 
 int main()
 {
	 printf("Введите номер годa\n");
	 int r = 0;
	 scanf("%d", &r);  
	 if (r%4 == 0)
	 {
		 if(!r%100 == 0)
		 {			 
		 printf("В году 366 дней");
		}
		else
		{
			if(r%400 == 0)
			{
				 printf("В году 366 дней");
			}
			else
			{
				printf("в году 365 дней");
		}
		}
	 
	 }
	 else
	 {
		 printf("в году 365 дней");
	 }
 } 
