#include <stdio.h>


void merge(int a[], int b[], int c[], int sizeA, int sizeB) {
    int i,j,k;
    sizeA--;
    sizeB--;

    while(i < sizeA | j < sizeB) {
        if ((a[i] < b[j] & i < sizeA) || (j == sizeB)) {
            c[k] = a[i];
            i++;
        } else {
            c[k] = b[j];
            j++;
        }
        k++;    
    }
}

int main(void) {
    int x[5] = {1,3,5,6,100};
    int y[5] = {-8, 10, 20, 99, 47682};
    int z[10];

    merge(x,y,z,5,5);

    for (int i=0; i<10; i++) {
        printf("%d ", z[i]);
    }

    return 0;
}