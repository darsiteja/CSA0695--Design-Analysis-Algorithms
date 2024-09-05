#include<stdio.h>
int main()
{
	int n,rem,sum=0,temp;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	while(temp)
	{
		rem=temp%10;
		sum+=rem*rem*rem;
		temp/=10;
	}
	if(sum==n)
	printf("is Armstrong");
	else
	printf("is not a Armstrong");
}
