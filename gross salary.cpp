#include<stdio.h>
#include<conio.h>

int main()
{
	int bs,da,hra,total;
	printf("Enter basic salary of Employee \n");
	scanf("%d",&bs);
	
	da=bs*30/100;
	hra=bs*30/100;
	total=bs+da+hra;
	
	printf("Total salary of Employee =\n%d",total);
	return 0;
}

