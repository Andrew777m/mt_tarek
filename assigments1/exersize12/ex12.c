/*
 * ex12.c
 *
 *  Created on: ٠٢‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */

#include <stdio.h>
#include <stdlib.h>
int main(void){
	int factorial=1;
	int n;
		printf("enter your number\r\n");
		fflush(stdout);
		scanf("%d",&n);
 for(int i = n;i>0;i--){
	 factorial*=i;
 }
  printf("factorial element = %d",factorial);

  return 0;
}


