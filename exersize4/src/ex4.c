/*
 ============================================================================
 Name        : exersize4.c
 Author      : andrew
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main(void){
	float radius,area,circumference;
	printf("enter radius of circle\r\n");
	fflush(stdout);
	scanf("%f",&radius);
	area= 3.14f * radius * radius;
	circumference=2 * 3.14f *radius;
	printf("area of circle = %f \r\n",area);
	fflush(stdout);
	printf("circumference of circle = %f \r\n",circumference);

	return 0;
}
