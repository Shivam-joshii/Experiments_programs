frequency of a Number:


#include <stdio.h>
int main() {
    int n, num, count=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to find frequency: ");
    scanf("%d", &num);
    for(int i=0; i<n; i++) {
        if(arr[i] == num)
            count++;
    }
    printf("Frequency of %d = %d\n", num, count);
    return 0;
}
