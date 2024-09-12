
#include <stdio.h>

void findMinMax(int arr[], int n) {
    int min = arr[0], max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
}

int main() {
	printf("Name:Teja\n Reg.no:192210626\n");
    int arr[] = {1, 7, 3, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, n);
    return 0;
}

