//
// Created by nadee on 3/28/2025.
//

#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

void ascending(int * array, int count)
{
   for (int i = 0; i < count - 1; i++)
   {
      for (int j = 0; j < count - i - 1; j++)
      {
         if (array[j] > array[j + 1]) //==> elements swap
         {
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
         }
      }
   }
   printf("Ascending order: ");
   for (int i = 0; i < count; i++)
   {
      printf("%d ", array[i]);
   }
}

void descending(int * array, int count)
{
   for (int i = 0; i < count - 1; i++)
   {
      for (int j = 0; j < count - i - 1; j++)
      {
         if (array[j] < array[j + 1]) //==> elements swap
         {
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
         }
      }
   }
   printf("Descending order: ");
   for (int i = 0; i < count; i++)
   {
      printf("%d ", array[i]);
   }
}