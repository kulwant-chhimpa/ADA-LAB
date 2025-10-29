#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarySearch(int arr[], int n, int key)

{
int low = 0, high = n - 1;
while (low <= high)
{
int mid = low + (high - low) /
2; if (arr[mid] == key)
return mid; else if (arr[mid] <
key) low = mid + 1;
else high = mid - 1;
}
return -1;
}

void generateSortedArray(int arr[], int n)
{ for (int i = 0; i < n; i++) arr[i] = i; //
Sorted numbers from 0 to n-1
}

double get_time_sec()
{
struct timespec ts;
clock_gettime(CLOCK_MONOTONIC, &ts); return
ts.tv_sec + ts.tv_nsec / 1e9;
}

double get_time_di (struct timespec start, struct timespec end)

{
return (end.tv_sec - start.tv_sec) +
(end.tv_nsec - start.tv_nsec) / 1e9;
}

int main()
{
int key, result;
clock_t start, end;
double time_taken;

// printf("Enter the number of Elements: ");
// scanf("%d", &n);

int n[] = {10, 100, 500, 1000, 10000, 50000, 100000, 500000, 1000000};
for (int i = 0; i < 9; i++)
{
int o = n[i]; int *arr =
malloc(o * sizeof(int)); if (!arr)
{
printf("Memory allocation failed.\n");
return 1;
}

generateSortedArray(arr, o);

key = -1; // Element not present to simulate worst case



struct timespec start, end;
clock_gettime(CLOCK_MONOTONIC, &start);

for (int rep = 0; rep < 100000; rep++)
{
result = binarySearch(arr, o, key);
}
clock_gettime(CLOCK_MONOTONIC, &end);

time_taken = get_time_di (start, end);
double avg_time = time_taken /100000.0;

printf("Average time per search for n = %d: %.10lf seconds\n", o,
avg_time);

free(arr);
}
return 0;
}
