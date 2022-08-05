/*
 * ex1.c
 *
 *  Created on: ٠٢‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */
#include<stdio.h>

int main(void){
	int num1,num2,result;
	printf("enter two numbers,please\r\n");
	fflush(stdout);
	scanf(" %d %d",&num1,&num2);
	result=(((num1+num2)*3)-10);
	printf("the result =%d ",result);
	fflush(stdout);
	return 0;
}


