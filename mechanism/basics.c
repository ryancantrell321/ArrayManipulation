//
// Created by nadee on 3/27/2025.
//

#include <stdio.h>
#include "basics.h"

//--> Function Logic
void info()
{
    printf("Welcome to Array Manipulation Program");
    printf("\n");
    printf("Licensed under the MIT License.");
    printf("\n\n");
    printf("Usage Guide:");
    printf("\n");
    printf("You will first have to specify the number of elements you will enter.");
    printf("\n");
    printf("Then you will be given several options to choose from.");
    printf("\n\n");

}
void display()
{
    printf("Options: ");
    printf("\n");
    printf("1. Display Array Size");
    printf("\t");
    // printf("\n");
    printf("2. Insert Values (YOU CAN ONLY USE THIS ONCE FOR EACH PROGRAM INSTANCE)");
    printf("\n");
    printf("3. Display Values");
    printf("\t");
    //printf("\n");
    printf("4. Update Values");
    printf("\n");
    printf("5. Delete Values");
    printf("\t");
    //printf("\n");
    printf("6. Search Values");
    printf("\n");
    printf("7. Smallest Value");
    printf("\t");
    //printf("\n");
    printf("8. Largest Value");
    printf("\n");
    printf("9. Sort Array");
    printf("\t\t");
    //printf("\n");
    printf("10. Exit");
    printf("\n\n");

}

void display_array(const int array[], const int * array_size)
{
    for (int i = 0; i < * array_size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
}

void show_array(int array[], int *count)
{
    printf("Array elements are:\n");
    for (int i = 0; i < * count; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n");
}

void show_array_size(int array_size, int count)
{
    printf("Maximum Specified Array Size: %d", array_size);
    printf("\n");
    printf("Filled Array Length: %d", count);
    printf("\n\n");
}

void array_input(int size, int * array, int *count)
{
    * count = 0;

    for (int i = 0; i < size; i++)
    {
        printf("Enter Array Element %d: ", i + 1);
        if (scanf("%d", &array[i]) != 1)
        {
            printf("Entry Exited (Type 3 to display the values entered)");
            printf("\n\n");

            while (getchar() != '\n');
            break;
        }
        (*count)++;

        if (*count == size)
        {
            printf("The Array is Full!");
            printf("\n");
            printf("(Type 3 to display the values)");
            printf("\n");
            printf("(Type 1 to view the array length)");
            printf("\n\n");
            break;
        }
    }
}
