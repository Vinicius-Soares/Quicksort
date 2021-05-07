#include <stdio.h>
#include "randomizer.h"
#include "quicksort.h"

//first half sorted, second half reversed
int main(void)
{
    int n = 10;
    int arr[n];
    for (int i = 0; i < n/2; i++)
        arr[i] = i;
    for (int i = n/2; i < n; i++)
        arr[i] = n - (i - n/2);
    quicksort(arr, 0, n - 1);
    return 0;
}