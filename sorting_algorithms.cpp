/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			sorting_algorithms.cpp
 * Author(s):		<your name>
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/

#include "sorting_algorithms.h"
#include <stdlib.h>

void init_random(int* array,int size){
  for (int i = 0; i < size; i++) {
    array[i] = rand();
   }
}

void bubble_sort(int* array,int size){
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        int swap = array[i];
        array[i] = array[j];
        array[j] = swap;
        if(array[i] < array[j])
        {
          swap = array[i];
          array[i] = array[j];
          array[j] = swap;
        }
    }
  }


}

void insertion_sort(int* array,int size){
  for (int i = 0; i < size; i++) {
    int number = array[i];
    int e = i-1;
    while (e >= 0 && array[e] > number) {
      array[e+1] = array[e];
      e = e -1;
    }
    array[e+1] = number;
  }


}
