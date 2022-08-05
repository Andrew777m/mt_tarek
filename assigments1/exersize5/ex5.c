/*
 * ex5.c
 *
 *  Created on: ٠٢‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */

#include <stdio.h>
#include <stdlib.h>
int main(void){
  char litter;
  printf("enter litter\r\n");
  	fflush(stdout);
  	scanf("%c",&litter);
	printf("ASCII code of your litter = %d \r\n",litter);
  	fflush(stdout);

  return 0;
}
