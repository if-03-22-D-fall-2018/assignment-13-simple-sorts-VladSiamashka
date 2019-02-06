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
#include "general.h"
#include <cstdlib>
#include <cstdbool>
#include <time.h>
#include "sorting_algorithms.h"

void init_random(int the_array[], int len)
{
  srandom(time(NULL));
  for (unsigned long i = 0; i < len -1; i++)
  {
    the_array[i] = random();
  }
}
void bubble_sort(int the_array[], int len)
{
  bool has_swapped = false;
  do {
    has_swapped = false;
    for (int i = 0; i < len-1; i++)
    {
      if (the_array[i] > the_array[i+1])
      {
        int temp = the_array[i];
        the_array[i] = the_array[i+1];
        the_array[i+1] = temp;
        has_swapped = true;
      }
    }
  } while(has_swapped);
}
void insertion_sort(int the_array[], int len)
{
  int j;
	for(int i = 1; i < len; i++)
	{
		j = i;
		while(j>0 && the_array[j - 1] > the_array[j]){
			int tmp = the_array[i];
			the_array[i] = the_array[i-1];
			the_array[i+1] = tmp;
			j--;
		}
  }
}
