// https://school.programmers.co.kr/learn/courses/30/lessons/120809
// Double each element of the array
// Use Vector-style Dynamic Array

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* arr = NULL;
    int size = 0;
    int capacity = 4;
    int x;

    arr = malloc(capacity * sizeof(int));
    if(NULL == arr) {  // Handle 'malloc Error'
      return 1;
    }

    while (scanf("%d", &x) == 1) {   // Handle input accordingly
        if (size == capacity) {
            capacity *= 2;
            int* temp = realloc(arr, capacity * sizeof(int));
            if (NULL == temp) {  // Handle 'realloc Error'
                free(arr);
                return 1;
            }
          
            arr = temp;
        }  // Vector style

        arr[size++] = x * 2;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;
    return 0;
}
