#include <stdio.h>
#include <stdlib.h>
/**
* main - program that shows grading system using the average of all the scores per month in the task you have solved.
* name - Fasasi Abosede (mufatech)
* date - 02/03/2023
  */
int main()
{
  int score1, score2, score3;
  float avg_scores;
  char reply;
  //prompt student to enter the score per month
  printf("Input your score for month 1: \n");
  scanf("%d", &score1);
  printf("Input your score for month 2: \n");
  scanf("%d", &score2);
  printf("Input your score for month 3: \n");
  scanf("%d", &score3);
  avg_scores = (score1 + score2 + score3)/3.0;
  if (avg_scores >=1 && avg_scores <= 50) 
  {
    printf("Very poor, Go back home and learn how to cook \n");
  }
  else if (avg_scores >=51 && avg_scores <= 79)
  {
    printf("You are a failure \n");
  }
  else if (avg_scores >=80 && avg_scores <= 120)
  {
    printf(" You are doing well, keep it up \n");
  }
  else if (avg_scores >=121 && avg_scores <= 175)
  {
    printf("I hope you are not copying from someone github?, reply with y for yes and n for no: \n");
    scanf("%s", &reply);
    if (reply == 'y' || reply == 'Y')
    {
      printf("Repent and learn");
    }
    else if (reply == 'n' || reply == 'N')
    {
      printf("You are doing very well");
    }
    else
    {
      printf("You have entered the wrong reply, kindly follow the instruction");
      }
    }
    else if (avg_scores >=176 && avg_scores <= 200)
    {
      printf("ALX is coming to investigate you");
    }
    else
    {
     printf("You have input invalid score, kindly enter the correct value");
      }
   
  return 0;
    }
    

  
