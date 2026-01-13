/*
WAP: Find duplicate element V2
Date: 01-oct-2025
*/

#include <stdio.h>

int main() {
    int n, i, j, count;
    printf("Enter the size of elements: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        count=0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            printf("\nThe unique element is %d in the array!", arr[i]);
            return 0;
        }
    }

    printf("\nThere is no unique element found in the array!");
    return 0;
}

