/*
 * ex13.c
 *
 *  Created on: ٠٣‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */

#include <stdio.h>
#include <stdlib.h>
int main(void){
	int prime_num;
	printf("enter your number\r\n");
	fflush(stdout);
	scanf("%d",&prime_num);
	int i;
	int temp=0;
	for(i=2;i<prime_num;i++){
		if( prime_num % i != 0 )
		{
			temp+=1;

		}
		else {
			break;
		}
	}
	if(temp == prime_num-2  ||prime_num==2)
	{
		printf("the number is prime \r\n");
	}

	else {

		printf("the number isn't prime \r\n");
	}


	return 0;
}


