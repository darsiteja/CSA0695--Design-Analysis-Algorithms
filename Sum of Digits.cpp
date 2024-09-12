
#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
	printf("Name:Teja\n Reg.no:192210626\n");
    int n = 1234;
    printf("Sum of digits: %d\n", sumOfDigits(n));
    return 0;
}

