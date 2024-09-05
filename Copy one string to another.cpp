#include<stdio.h>
#include<string.h>
int main()
{
	printf("Name:Teja\n");
	printf("Reg.no:192210626\n");
	char str1[20],str2[20];
	printf("enter a string: ");
	scanf("%s",str1);
	strcpy(str2,str1);
	printf("copied string is: %s",str2);
}
