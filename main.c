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
# include "mechanism/search_remove_values.h"
# include "mechanism/basics.h"
# include "mechanism/max_min.h"

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
                printf("\n\n");

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