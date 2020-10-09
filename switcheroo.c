#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // 1.
    int arr1 [10];

    // 2.
    int i;
    srand( time(NULL) );
    // for loop populating arr1
    for (i = 0; i < 9; i++)
        arr1[i] = rand();
    
    // 3.
    arr1[9] = 0;

    // 4.
    printf("printing out arr1\n");
    for (i = 0; i < 10; i++) 
        printf("arr1[%d]: %d\n", i, arr1[i]);
    printf("\n");

    // 5.
    int arr2 [10];

    // 6.
    // for loop populating arr2
    int *a1p = arr1+9;
    int *a2p = arr2;
    printf("printing out arr2\n");
    for (i = 0; i < 10; i++) {
        *(a2p+i) = *(a1p-i);
        printf("arr2[%d]: %d\n", i, *(a2p+i));
    }
}