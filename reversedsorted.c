#include <stdio.h>
#include "randomizer.h"
#include "quicksort.h"

//first half reversed, second half sorted
int main(void)
{
    int n = 10;
    int arr[n];
    for (int i = 0; i < n/2; i++)
        arr[i] = n/2 - i - 1;
    for (int i = n/2; i < n; i++)
        arr[i] = i;
    printArray(arr, n);
    quicksort(arr, 0, n - 1);
    return 0;
}