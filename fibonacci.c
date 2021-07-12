#include<stdio.h>
#include<conio.h>
int main()
{
	int i,f1=0,f2=1,fib,no;
	printf("Enter the Number =");
	scanf("%d",&no);
	printf("%d\n%d\n",f1,f2);
	
	for(i=1;i<no;i++)
	{
		fib=f1+f2;
		f1=f2;
		f2=fib;
		printf("%d\n",fib);
	}
	return 0;
}