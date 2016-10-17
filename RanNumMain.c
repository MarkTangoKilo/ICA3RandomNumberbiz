#include <stdlib.h>
#include <stdio.h>
#include "RanNum.h"

int main()
{
  int iNum = 933;
  int iFirst = 0;
  int iTotal = 0;
  int aRanArray[1000];


  //Generating the random aRanArray

  printf("The random array: \n");
  for(int i = 0; i < 1000; i++)
  {
    //Fills array
    aRanArray[i] = rand() % 1000;
    //Prints out numbers within array
    printf("%d ", aRanArray[i]);
  }
  //Finding the first time iNum appears in aRanArray
  iFirst = First(aRanArray, iNum);

  //Finding the number of times iNum appears in aRanArray
  iTotal = Total(aRanArray, iNum);

  //Printing out the values
  printf("\n \n");
  if (iTotal > 1)
  {
      printf ("The First time %d appears in the array is placeholder: %d.\n\n",iNum, iFirst);
      printf ("The total number of time %d appears in the array is %d times.\n", iNum, iTotal);
  }
  else if (iTotal == 1)
  {
    printf ("The First time %d appears in the array is placeholder: %d.\n\n",iNum, iFirst);
    printf ("The total number of time %d appears in the array is once.\n", iNum);
  }
  else
  {
    printf("%d number doesn't appear in the array.\n\n", iNum);
  }


}
