#include <stdio.h>

void knapsack(int n, float weight[20], float profit[20], float capacity) {
float x[20], total_profit = 0.0;
float u = capacity;
int i;

for (i = 0; i < n; i++) {
x[i] = 0.0;
}

for (i = 0; i < n; i++) {
if (weight[i] > u)
break;
else {
x[i] = 1.0;
total_profit += profit[i];
u -= weight[i];
}
}

if (i < n) {
x[i] = u / weight[i];
total_profit += x[i] * profit[i];
}

printf("\nThe resultant vector (fractions taken) is:\n");
for (i = 0; i < n; i++) {
printf("%f\t", x[i]);
}

printf("\nThe maximum profit is: %f\n", total_profit);
}

int main() {
float weight[20], profit[20], ratio[20], capacity;
int number;
printf("Enter the number of objects: ");
scanf("%d", &number);

printf("Enter the weight and profit of each object:\n");
for (int i = 0; i < number; i++) {
scanf("%f %f", &weight[i], &profit[i]);
}

printf("Enter the capacity of knapsack: ");
scanf("%f", &capacity);

// Calculate profit/weight ratio
for (int i = 0; i < number; i++) {
ratio[i] = profit[i] / weight[i];
}

// Sort by ratio in descending order
for (int i = 0; i < number - 1; i++) {


for (int j = i + 1; j < number; j++) {
if (ratio[i] < ratio[j]) {
float temp;

temp = ratio[i];
ratio[i] = ratio[j];
ratio[j] = temp;

temp = weight[i];
weight[i] = weight[j];
weight[j] = temp;

temp = profit[i];
profit[i] = profit[j];
profit[j] = temp;
}
}
}

knapsack(number, weight, profit, capacity);
return 0;
}
