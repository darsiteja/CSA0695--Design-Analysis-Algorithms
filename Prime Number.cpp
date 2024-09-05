#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		sum++;
		break;
	}
	if(sum==0)
	printf("is a prime");
	else
	printf("is not a prime number");
}
