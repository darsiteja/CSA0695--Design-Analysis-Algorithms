#include<stdio.h>
void fib(int n)
{
	int a=0,b=1;
	printf("Fibonacci series:%d %d",a,b);
	for(int i=2;i<	n;i++)
	{
		int temp=a+b;
		printf(" %d",temp);
		a=b;
		b=temp;
	}
	printf("\n");
}
int main()
{
	int num;
	printf("Enter the value of n:");
	scanf("%d",&num);
	fib(num);
}

