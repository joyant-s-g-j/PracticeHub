#include <stdio.h>

int main() {
    int arr[10], sum = 0;

    printf("Enter 10 integers: ");
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }

    printf("Sum of odd numbers: %d\n", sum);
    return 0;
}
