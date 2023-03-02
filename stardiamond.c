#include <stdio.h>

/**
* main - program to enter week number and print day of the week
* name - Fasasi Abosede Sidiqat (mufatech)
* Date - 14th February 2023
*/

int main(){
        int height = 13, width;

        for(int i = 0; i < height; i++){


                if(i <= (height - 1) /2)
                {
                        for(width = (height - 1)/2; width > i; width--){
                                printf(" ");
                        }
                        for(int j = 0; j <= i*2; j++){
                                printf("*");
                        }
                }
                else
                {
                        for(int m = (height - 1) / 2; m < i; m++)
                                printf(" ");
                        for(int k = (i * 2) - height; k < height - 1; k++)
                        {
                                printf("*");
                        }
                }

                printf("\n");
        }
        return 0;
}
