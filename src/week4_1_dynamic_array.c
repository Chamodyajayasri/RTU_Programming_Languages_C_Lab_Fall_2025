/*
 * week4_1_dynamic_array.c
 * Author: Kakulandala Liyanage Don Chamodya Jayasri
 * Student ID: 243AEB012
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 *   Students should allocate memory for an integer array, fill it with data,
 *   compute something (e.g., average), and then free the memory.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr = NULL;
    int sum = 0;
    float average;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    // Allocate memory for n integers using malloc
    arr = (int*)malloc(n * sizeof(int));

   
    if (arr == NULL) {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }

    
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Error reading integer at position %d\n", i);
            free(arr);
            return 1;
        }
    }


    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    average = (float)sum / n;

   
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

   
    free(arr);
    arr = NULL;

    return 0;
}
