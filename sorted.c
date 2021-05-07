#include <stdio.h>
#include "randomizer.h"
#include "quicksort.h"


int main(void)
{
    int n = 100000;
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = i;
    quicksort(arr, 0, n - 1);
    return 0;
}