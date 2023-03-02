#include <stdio.h>
/**
* Progam to print right angle pattern
* name - Fasasi Abosede Sidiqat (mufatec)
* Date - 14th February 2023
  */
int main()
{
  int i, j, rows;
  printf("Enter the numbers of row: \n");
  scanf("%d", &rows);
for(int i = 1; i <= rows; ++i)
  {
   for(j = 1; j <= i; ++j)  
     {
  printf("* ");
  }
    printf("\n");
    }
return 0;
  }
