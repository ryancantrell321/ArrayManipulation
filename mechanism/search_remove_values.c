//
// Created by nadee on 3/25/2025.
//

# include "search_remove_values.h"
# include  <stdio.h>

void remove_val(int array[], int * array_size, int * count, int remove_value)
{

    bool flag = false;

    for (int i = 0; i < * array_size; i++) // Integer 'i' travels through the memory of array_size
    {
        if (array[i] == remove_value)
        {
            printf("Value %d has been found at position %d.", remove_value, i + 1);
            printf("\n");

            // Shifting positions right to left
            for (int j = i; j < * array_size - 1; j++)
            {
                array[j] = array[j + 1];
            }
            printf("Value %d has been deleted.", remove_value);
            printf("\n\n");

            (*array_size)--;
            (*count)--;
            i--;

            flag = true;
            break;
        }

    }

    if (flag == false)
    {
        printf("Value %d not found in the array.", remove_value);
        printf("\n");
    }
}

void search_val(const int array[], const int * array_size, int search_value)
{
    bool flag = false;

    for (int i = 0; i < * array_size; i++)
    {
        if (array[i] == search_value)
        {
            printf("Value %d has been found at position %d.", search_value, i + 1);
            printf("\n\n");


            flag = true;
            break;
        }

    }

    if (flag == false)
    {
        printf("Value %d not found in the array.", search_value);
        printf("\n\n\n");
    }
}
