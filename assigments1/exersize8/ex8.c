/*
 * ex8.c
 *
 *  Created on: ٠٢‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	double num;
	int temp;
	do{
		printf("enter your number \r\n");
		fflush(stdout);
		scanf("%lf",&num);
	}while(num<=0);
	temp=sqrt(num);

	if(sqrt(num)-temp==0)
	{
		printf("perfect square number\r\n");
	}
	else {
		printf("not perfect square\r\n ");
	}
	return 0;
}

