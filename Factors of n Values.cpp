
#include <stdio.h>

void printFactors(int n) {
    printf("Factors of %d are: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
	printf("Name:Teja\n Reg.no:192210626\n");
    int n = 28;
    printFactors(n);
    return 0;
}

