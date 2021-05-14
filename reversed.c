#include <stdio.h>
#include <time.h>
#include "randomizer.h"
#include "quicksort.h"


int main(void)
{
    clock_t start, end;
    double cpu_time_used;

    int n = 100000;
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = n - i;

    start = clock();
    quicksort(arr,0,n-1);
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%lf\n",cpu_time_used);
    return 0;
}