#include <stdio.h>

int arraysum(int arra[], int a) {
    int sum = 0, i;
    for (i = 0; i < a; i++) {
        sum += arra[i];
    }
    printf("\nThe sum of the array: %d\n", sum);
}

int main() {
    int size, i;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] : ", i);
        scanf("%d", &arr[i]);
    }
    int sum = arraysum(arr, size);

}
