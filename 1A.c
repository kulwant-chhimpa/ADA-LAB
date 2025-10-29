#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linearSearch(int arr[], int key, int n)
{ for (int i = 0; i < n;
i++)
{
if (arr[i] == key)
{
return i;
}
}
return -1;
}

void generateRandomArray(int arr[], int n)
{ for (int i = 0; i < n;
i++)
{
arr[i] = rand() % 100000; // Generate random integers
}
}

int main()
{
int key, result;
clock_t start, end;
double time_taken;
// printf("Enter the number of Elements: ");
// scanf("%d", &n); int n[] = {10, 100, 500, 1000, 10000, 50000,
100000, 500000, 1000000}; for (int i = 0; i < 9; i++)
{
int o=n[i]; int *arr =
malloc(o * sizeof(int));
if (!arr)
{
printf("Memory allocation failed.\n");
return 1;
}

generateRandomArray(arr, o);

key = -1; // Element not present to simulate worst case

start = clock(); for
(int i = 0; i < 1000; i++)
{
result = linearSearch(arr, key, o);
}
end = clock(); time_taken = ((double)(end - start)) /
CLOCKS_PER_SEC/1000.0 ; if (result == -1)
printf("Element not found.\n");
else
printf("Element found at index %d.\n", result);


printf("Time taken for n = %d: %lf seconds\n", o, time_taken);

free(arr);
}
return 0;
}
