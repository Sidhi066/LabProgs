#include <stdio.h>

float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("Average: %.2f\n", calculateAverage(arr, 5));
    return 0;
}
