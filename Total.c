#include <stdlib.h>
#include <stdio.h>
#include "RanNum.h"

//Finding the total number of times iNum
//appears in aRanArray
int Total(int *aRanArray, int iNum)
{
  int iTotal = 0;
  for(int i = 0; i < 1000; i++)
  {
    if(aRanArray[i] == iNum)
    {
      iTotal++;
    }
  }
  return iTotal;
}
