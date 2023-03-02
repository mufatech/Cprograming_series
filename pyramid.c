#include <stdio.h>
/**
* Progam to print pyramid pattern
* name - Fasasi Abosede Sidiqat (mufatec)
* Date - 14th February 2023
  */

int main() {
  int i, j, z, height = 13; 
 //printf("Enter a number to define the height: \n");
    //scanf("%d", &height);
  int width = height -1, num=1;
  printf("\n");
  for (int i = 1; i <= height; i++) {
      for (int j = 1; j <= width; j++) {
        printf(" ");
        }
      for (int z = 1; z <= num; z++) {
        printf("*");
      }
      if (width > i) {
       width = width - 1;
        num = num + 2;
      }
      if (width < i) {
        width = width + 1;
        num = num - 2;
      }
    printf("\n");
    }
  return 0;
  }

    
  

  

