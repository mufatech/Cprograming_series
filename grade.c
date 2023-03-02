#include <stdio.h>

/**
 * main - program to input marks of 5 subject and calculate the 
 * percentage for grading
 * Name- Fasasi Abosede Sidiqat
 * Date - 15th February 2023
 * Always Return: 0;
 */

int main() 
{
  int phy, chem, bio, math, com; 
  float sum, per; 

  // Input the mark for the 5 subjects//
  printf("Enter the mark for the 5 subjects:");
  scanf("%d,%d,%d,%d,%d", &phy, &chem, &bio, &math, &com);
  //calculate the sum of the subject
  sum = phy + chem + bio + math + com;
  {
    printf("sum = %f\n", sum);
  }
  //calculate the percentage
  per = sum/5.0;
  {
   printf("Percentage = %.2f\n", per); 
    }
//print grade according to percentage
  if (per >= 90) 
  {
    printf("Grade A");
  } 
  else if (per >= 80)
  {
    printf("Grade B");
  }
  else if (per >= 70) 
  {
    printf("Grade C");
  }
  else if (per >= 60)
  {
    printf("Grade D");
  } 
  else if (per >= 40) 
  {
    printf("Grade E");
  } 
  else if (per < 40) 
  {
    printf("Grade F");
  } 
  else 
  {
    printf("You are fail");
    return 0;
  }
  }
