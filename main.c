#include <stdio.h>
#include "randomizer.h"
#include "quicksort.h"


int main(void)
{
    int n = 10;
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = i;
    int* newArr = shuffle(arr, n);
    quicksort(newArr, 0, n - 1);
    return 0;
}