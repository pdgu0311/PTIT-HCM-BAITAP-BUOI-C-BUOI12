#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int main() {
    int array[] = {3, 5, 7, 2, 8, -1, 4};
    int size = sizeof(array) / sizeof(array[0]); 

    int max = findMax(array, size);

    printf("so lon nhat trong mang la: %d\n", max);

    return 0;
}
