#include <stdio.h>

/**
* main - program to enter week number and print day of the week
* name - Fasasi Abosede Sidiqat (mufatec)
* Date - 14th February 2023
*/

int main()
{
  int week;
  /*Input week number from the user*/
  printf("Enter week number (1-7):");
  scanf("%d", &week);
  
  if(week == 1)
  {
    printf("Sunday");
  }
  else if(week == 2)
  {
    printf("Monday");
  }
  else if(week == 3)
  {
    printf("Tuesday");
  }
  else if(week == 4)
  {
    printf("Wednesday");
  }
  else if(week == 5)
  {
    printf("Thursday");
  }
  else if(week == 6)
  {
    printf("Friday");
  }
  else if(week == 7)
  {
    printf("Saturday");
  }
  else
  {
  printf("Invalid input! please enter week number between 1-7");
  }
  return (0);
}
