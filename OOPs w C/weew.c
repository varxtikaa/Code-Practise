#include <stdio.h>
#include <stdlib.h>
// Custom comparison function
int compare(const void *a, const void *b) {
int num1 = *((int*)a);
int num2 = *((int*)b);
// Check if both numbers are even
if (num1 % 2 == 0 && num2 % 2 == 0) {
// Sort even numbers in ascending order
return num1 - num2;
}
// If one is even and the other is odd, sort even before odd
else if (num1 % 2 == 0) {
return -1;
}
else if (num2 % 2 == 0) {
return 1;
}
// Sort odd numbers in ascending order
else {
return num1 - num2;
}
}
int main() {
int arr[] = {9,4,7,2,8,1};
int n = sizeof(arr) / sizeof(arr[0]);
qsort(arr, n, sizeof(int), compare);
printf("Sorted array: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}