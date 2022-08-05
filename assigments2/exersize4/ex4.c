/*
 * ex4.c
 *
 *  Created on: ٠٥‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */


#include <stdio.h>
#include <stdlib.h>
double calc(double x, double y,int a);
int main(void){
	double i,a,b;
	printf("enter 1 for + 2 for - 3 for * 4 for / \r\n");
	fflush(stdout);
	scanf("%d",&i);
	printf("enter two nunber \r\n");
	fflush(stdout);
	scanf("%lf%lf",&a,&b);
	printf("the result is %lf",calc(a,b,i));
	return 0;
}
double calc(double x, double y,int a){
	double  z;
	switch(a){

	case 1:
		z=x+y;
		break;
	case 2:
		z=x-y;
		break;
	case 3:
		z=x*y;
		break;

	case 4:
		z=x/y;
		break;
	}
	return z;
}
