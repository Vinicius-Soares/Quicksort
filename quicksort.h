#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void quicksort(int list[], int low, int high)
{
    int pivot, i, j, temp;
    if (low < high)
    {
        pivot = low;
        i = low;
        j = high;
        while (i < j) 
        {
            while (list[i] <= list[pivot] && i <= high)
            {
                i++;
            }
            while (list[j] > list[pivot] && j >= low)
            {
                j--;
            }
            if (i < j)
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        // posicionar o pivô na sua casa final

        temp = list[j];
        list[j] = list[pivot];
        list[pivot] = temp;

        //aplicar quicksort recursivamente às partições a esquerda e a direitaa
        quicksort(list, low, j - 1);
        quicksort(list, j + 1, high);
    }
}