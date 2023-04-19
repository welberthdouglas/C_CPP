#include <stdio.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp; 
}

void bubble(int arr[], int size) {
    int last = size - 1;

    while (last > 0) {
        for (int i = 0; i < last ; i++) {
            if (arr[i] > arr[i+1]) {
                swap(&arr[i], &arr[i+1]);
            }
        }
        last--;
    }
}

int main(void) {
    int arr[12] = {1, 10, 23, 8, 0, 0, 89, -5, 6, 33, 9890, -98976};
    bubble(arr, sizeof(arr)/sizeof(int));

    for (int i=0; i < sizeof(arr)/sizeof(int); i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}