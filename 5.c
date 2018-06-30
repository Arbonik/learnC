#include <stdio.h>
 
 int main()
 {
	printf("Введите номер годa\n");
	int r = 0;
	scanf("%d", &r);  
	if ((r%4 == 0)&&(( r%100 != 0)||(r%400 == 0)))
	{
	printf("В году 366 дней");
	}
	else
	{
	printf("в году 365 дней");
	}
 } 
