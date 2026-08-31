#include <stdio.h>
#define N 10
void bubbleSortDesc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int findIndex(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[N];
 
    printf("please enter 10 integers:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    bubbleSortDesc(arr, N);
    
    printf("Array sorted in descending order:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
 
    int target;
    printf("please enter the number to search for: ");
    scanf("%d", &target);
    
    int index = findIndex(arr, N, target);
    if (index != -1) {
        printf("The index of the number in the array is: %d\n", index);
    } else {
        printf("The number is not in the array.\n");
    } 
    return 0;
}