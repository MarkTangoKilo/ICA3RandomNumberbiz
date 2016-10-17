#include <stdlib.h>
#include <stdio.h>
#include "RanNum.h"

//Finding the first time iNum Appears in the array
int First(int *aRanArray, int iNum)
{
  int iPlaceHolder = 0;
  for(int i = 0; i < 1000; i++)
  {
    if(aRanArray[i] == iNum)
    {
      return i;
      break;
    }
  }
  return -1;
}
