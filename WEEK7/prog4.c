#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, *arr1, *arr2, *result, i, j;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);
    arr1 = (int *)malloc(n1 * sizeof(int));
    printf("Enter elements of the first array:\n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    arr2 = (int *)malloc(n2 * sizeof(int));
    printf("Enter elements of the second array:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    result = (int *)malloc((n1 + n2) * sizeof(int));
    for (i = 0; i < n1; i++) {
        result[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        result[i + j] = arr2[j];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", result[i]);
    }

    free(arr1);
    free(arr2);
    free(result);
    return 0;
}
