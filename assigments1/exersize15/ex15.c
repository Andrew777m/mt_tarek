/*
 * ex15.c
 *
 *  Created on: ٠٣‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */
#include <stdio.h>
#include <stdlib.h>
int main(void){
	int pow ;
	printf("enter pow\r\n");
	fflush(stdout);
	scanf("%d",&pow);
	int num ;
	int temp_num=1;
	printf("enter num\r\n");
	fflush(stdout);
	scanf("%d",&num);
	int i;
	for(i=1;i<=pow;i++){
              temp_num*=num;

	}
	printf("pow of num =%d",temp_num);
	return 0;
}

