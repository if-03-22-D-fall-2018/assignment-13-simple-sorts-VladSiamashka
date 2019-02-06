/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			stopwatch.cpp
 * Author(s):		Peter Bauer
 * Due Date:		#due#
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "stopwatch.h"
#include <time.h>

float start;
float stop;

void start_stopwatch()
{
  start = clock();
}
void stop_stopwatch()
{
  stop = clock();
}
float elapsed_time()
{
  if (stop < start)
  {
    return (clock() -start) / CLOCKS_PER_SEC;
  }
  return (stop - start) / CLOCKS_PER_SEC;
}
