/*
Project Name: Array Manipulation
Creation Date: Monday, March 24, 2025
Created By: Farhan Nadim Iqbal
Student ID: 0182420012101240
GitHub ID: https://github.com/ryancantrell321
Course Instructor: Md. Jehadul Islam Mony
Batch: CSE 64F
Department: Computer Science and Engineering
Institution: Leading University, Sylhet
*/

# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
# include "mechanism/bubble_sort.h"

//--> Function Declarations
void display();
void info();
void show_array(int array[], int *count);
void show_array_size(int array_size, int count);
void array_input(int size, int *array, int *count);
void remove_val(int array[], int * array_size, int * count, int remove_value);
void search_val(const int array[], const int * array_size, int search_value);
int min_value(int * array, int array_size);
int max_value(int * array, int array_size);

//--> Main Code
int main()
{
    static int count = 0;
    info();

    while (true)
    {
        //--> Array Size Control
        int size = 0;

        printf("Enter the length of the array (1-10000): ");
        scanf("%d", &size);

        if (size < 1 || size > 10000)
        {
            printf("The input must be between 1-10000");
            printf("\n");
            while (getchar() != '\n'); // clearing input buffer to make space for new inputs
            continue;
        }

        int array[size];
        int array_size = sizeof(array) / sizeof(array[0]);


        while (true){

            display();

            //==> choice control
            int choice = 0;

            printf("Enter your choice (1-10): ");
            scanf("%d", &choice);

            if (choice < 1 || choice > 10)
            {
                printf("The input must be between 1-10. Please try again");
                printf("\n");
                while (getchar() != '\n');
                continue;
            }

            switch (choice)
            {
            case 1: //--> Array Size

                show_array_size(array_size, count);

                continue;

            case 2: //--> Entering Array value

                array_input(size, array, &count);

                continue;


            case 3: //==> Array Display
                show_array(array, &count);
                continue;

            case 4: //==> Array Updater

                int u = 0, v = 0;


                if (count < 1 || size < 1)
                {
                    printf("Array is empty. Please insert values first!");
                    printf("\n\n");

                    while (getchar() != '\n');
                    continue;
                }

                printf("Enter update position (1 to %d): ", count);
                scanf("%d", &u);

                if (u < 1 || u > count)
                {
                    printf("The input must be between 1-%d. Please try again", count);
                    printf("\n");

                    while (getchar() != '\n');
                    continue;
                }


                printf("\n");

                printf("Enter new value: ");
                scanf("%d", &v);

                array[u - 1] = v;

                printf("Value updated successfully!");

                while (getchar() != '\n');
                continue;

            case 5: //==> Array Deleter

                if (count < 1 || size < 1)
                {
                    printf("Array is empty. Please insert values first!");
                    printf("\n\n");

                    while (getchar() != '\n');
                    continue;
                }


                int value;
                printf("Enter the value you want to delete: ");
                scanf("%d", &value);


                remove_val(array, &array_size, &count, value);

                while (getchar() != '\n');
                continue;


            case 6: //==> Array Search

                if (count < 1 || size < 1)
                {
                    printf("Array is empty. Please insert values first!");
                    printf("\n\n");

                    while (getchar() != '\n');
                    continue;
                }

                int search_value;
                printf("Enter the value you want to search: ");
                scanf("%d", &search_value);

                search_val(array, &array_size, search_value);

                while (getchar() != '\n');
                continue;

            case 7: //==> Minimum Value

                if (count < 1 || size < 1)
                {
                    printf("Array is empty. Please insert values first!");
                    printf("\n\n");

                    while (getchar() != '\n');
                    continue;
                }

                int min = min_value(array, array_size);
                printf("Minimum value is: %d", min);
                printf("\n\n");

                while (getchar() != '\n');
                continue;

            case 8: //==> Maximum Value

                if (count < 1 || size < 1)
                {
                    printf("Array is empty. Please insert values first!");
                    printf("\n\n");

                    while (getchar() != '\n');
                    continue;
                }

                int max = max_value(array, array_size);
                printf("Maximum value is: %d", max);
                printf("\n\n");

                while (getchar() != '\n');
                continue;

            case 9: // Sorting Array

                if (count < 1 || size < 1)
                {
                    printf("Array is empty. Please insert values first!");
                    printf("\n\n");

                    while (getchar() != '\n');
                    continue;
                }

                int options;
                printf("Array Sorting Options: ");
                printf("\n");

                printf("1. Ascending Order");
                printf("\t");
                printf("2. Descending Order");
                printf("\n\n");

                printf("Enter your choice (1-2): ");
                scanf("%d", &options);

                switch (options) {

                case 1:
                    ascending(array, count);
                    printf("\n\n");

                    while (getchar() != '\n');
                    continue;

                case 2:
                    descending(array, count);
                    printf("\n\n");

                    while (getchar() != '\n');
                    continue;

                default:
                    printf("Invalid choice. Please try again.");
                    printf("\n\n");
                    continue;

                }





            case 10:
                printf("Exiting the program...");
                printf("\n");
                exit(0);

            default:
                printf("Invalid input. Please try again.");
                printf("\n\n");
                continue;
            }



            return 0;
        }
    }
}

//--> Function Logic
void info()
{
    printf("Welcome to Array Manipulation Program.");
    printf("\n\n");
    printf("Usage Guide:");
    printf("\n");
    printf("You will first have to specify the number of elements you will enter. 0 is considered a blank value.");
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
        printf("\n\n");
    }
}

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


