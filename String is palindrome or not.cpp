#include <stdio.h>
#include <string.h>

int main() {
	printf("Name:Teja\n");
	printf("Reg.no:192210626\n");
   char string[100], rev_string[100];

   printf("Enter a string: ");
   gets(string);

   strcpy(rev_string, string);
   strrev(rev_string);

   if(strcmp(string, rev_string) == 0)
      printf("%s is a palindrome string.\n", string);
   else
      printf("%s is not a palindrome string.\n", string);

   return 0;
}
