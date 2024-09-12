
#include <stdio.h>

int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main() {
	printf("Name:Teja\n Reg.no:192210626\n");
    int n = 1234;
    printf("Reversed Number: %d\n", reverse(n));
    return 0;
}

