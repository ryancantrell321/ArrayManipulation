//
// Created by nadee on 3/24/2025.
//

#include "max_min.h"


int min_value(int * array , int array_size)
{
    int min = array[0];
    for (int i = 1; i < array_size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int max_value(int * array, int array_size)
{
    int max = array[0];
    for (int i = 1; i < array_size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}


