#include <stdio.h>
#include <stdlib.h>
#include <Ɵme.h>

void merge(int arr[], int leŌ, int mid, int right) {
    int n1 = mid - leŌ + 1;
    int n2 = right - mid;
    int *L = (int*)malloc(n1 * sizeof(int));
    int *R = (int*)malloc(n2 * sizeof(int));
    int i, j, k;

    for(i = 0; i < n1; i++)
        L[i] = arr[leŌ + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    i = 0;
    j = 0;
    k = leŌ;

    while(i < n1 && j < n2) {
        if(L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while(i < n1)
        arr[k++] = L[i++];
    while(j < n2)
        arr[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSort(int arr[], int leŌ, int right) {
    if(leŌ < right) {
        int mid = leŌ + (right - leŌ) / 2;
        mergeSort(arr, leŌ, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, leŌ, mid, right);
    }
}

int main() {
    int n, i;

    prinƞ("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*)calloc(n, sizeof(int));

    srand(Ɵme(NULL));

    for(i = 0; i < n; i++)
        arr[i] = rand() % 1000;

    prinƞ("Unsorted array:\n");
    for(i = 0; i < n; i++)
        prinƞ("%d ", arr[i]);

    prinƞ("\n");

    clock_t start = clock();

    24293916036

    mergeSort(arr, 0, n - 1);

    clock_t end = clock();

    double Ɵme_taken = (double)(end - start) / CLOCKS_PER_SEC;

    prinƞ("Sorted array:\n");
    for(i = 0; i < n; i++)
        prinƞ("%d ", arr[i]);

    prinƞ("\nTime taken: %lf seconds\n", Ɵme_taken);

    free(arr);

    return 0;
}
