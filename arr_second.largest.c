Experiment Set 4: Arrays Second Largest Element
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0], secondLargest = -2147483648; // Minimum int value
    for(int i=1; i<n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if(secondLargest == -2147483648)
        printf("No second largest element.\n");
    else
        printf("Second largest element = %d\n", secondLargest);
    return 0;
}
