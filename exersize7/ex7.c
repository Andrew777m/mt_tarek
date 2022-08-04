/*
 * ex7.c
 *
 *  Created on: ٠٢‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */
#include <stdio.h>
#include <stdlib.h>
int main(void){
	float num1,num2,num3;
		printf("enter three numbers\r\n");
		fflush(stdout);
		scanf(" %f %f %f",&num1,&num2,&num3);
  if( num1 < num2 && num1 < num3 )
  {
	  printf("num1 is smallest number \r\n ");
	  fflush(stdout);
  }

  else if( num2 < num1 && num2 < num3 )
    {
  	  printf("num2 is smallest number \r\n ");
  	fflush(stdout);
    }
  else
      {
    	  printf("num2 is smallest number \r\n ");
    	  fflush(stdout);
      }


  return 0;
}

