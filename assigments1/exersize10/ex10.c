/*
 * ex10.c
 *
 *  Created on: ٠٢‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */
/*
 * ex10.c
 *
 *  Created on: ٠٢‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */
#include <stdio.h>
#include <stdlib.h>
int main(void){
	double x,y;
	int i;
	printf("enter two nunber \r\n");
			fflush(stdout);
			scanf(" %lf %lf",&x,&y);
	printf("enter 1 for + 2 for - 3 for * 4 for / \r\n");
	fflush(stdout);
	scanf(" %d",&i);

	switch(i){

	case 1:
		printf("the sum =%lf",x+y);
		break;
	case 2:
		printf("the subtract =%lf",x-y);
		break;
	case 3:
		printf("the multiply =%lf",x*y);
		break;

	case 4:
		printf("the sum =%lf",x/y);
		break;


	}


	return 0;
}
