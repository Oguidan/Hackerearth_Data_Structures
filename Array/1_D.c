#include <stdio.h>

int main()
{
    // Array declcaration and initialization
    int arr[] = {4, 12, 7, 15, 9};
    // Iterate over the array
    for (int idx = 0; idx < 5; idx++)
    {
        // Print out each element in a new line
        printf("%d\n", arr[idx]);
    }

    return 0;
}