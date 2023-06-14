#include <stdio.h>

void linear(int *array, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (array[i] == key) {
            printf("Element %d is present at position %d", key, i + 1);
            return;
        }
       
    }
    printf("Not found");
}

int main() {
    int array[] = {3, 2, 5, 4, 1};
    int n = sizeof(array) / sizeof(array[0]);
    int key = 1;
    linear(array, n, key);
    return 0;
}
