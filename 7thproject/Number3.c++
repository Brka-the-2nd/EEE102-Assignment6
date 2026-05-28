#include <stdio.h>

void swap_two(int *a, int *b)
 {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_ascending(int arr[], int n)
 {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap_two(&arr[j], &arr[j + 1]);
}

int find_smallest(int arr[], int n) 
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min) min = arr[i];
    return min;
}

int find_largest(int arr[], int n)
 {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

int comp_sum(int arr[], int n)
 {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

double comp_average(int arr[], int n) {
    return (double)comp_sum(arr, n) / n;
}

int main()
 {
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);

    int arr[100], original[100
    ];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        original[i] = arr[i];
    }

    printf("\nThe Input List: ");
    for (int i = 0; i < n; i++) printf("%d ", original[i]);

    sort_ascending(arr, n);

    printf("\nThe Sorted List: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    printf("\nThe Smallest Number: %d", find_smallest(arr, n));
    printf("\nThe Largest Number: %d", find_largest(arr, n));
    printf("\nThe Sum: %d", comp_sum(arr, n));
    printf("\nThe Average: %.2f\n", comp_average(arr, n));

    return 0;
}