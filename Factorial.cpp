#include<stdio.h>
int main()
{
	int num,i,fact;
	printf("Name:Teja\n");
	printf("Reg.no:192210626\n");
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("Factorial of %d",fact);
}
