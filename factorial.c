
#include <stdio.h>
/**
* Progam to calculate the factorial of a number
* name - Fasasi Abosede Sidiqat (mufatech)
* Date - 14th February 2023
  */

int main()
{
        int i, num;
        int fact = 1;
        printf("Enter any number: \n");
        scanf("%d", &num);
  {
        for(i = 1; i<= num; i++)
                fact = fact * i;
    
        printf("The factorial of %d is: %d\n", num, fact);
    }
        return 0;

}
