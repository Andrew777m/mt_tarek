/*
 * ex6.c
 *
 *  Created on: ٠٢‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */

#include <stdio.h>
#include <stdlib.h>
int main(void){
	float num1,num2;
	printf("enter two numbers\r\n");
	fflush(stdout);
	scanf(" %f %f",&num1,&num2);
	if(num1==num2){

		printf("they are equal\r\n");
	}
	else if(num1>num2)
	{
		printf("num1 > num2\r\n ");
	}

	else{

		printf(" num2 > num1\r\n");
	}


	return 0;
}
