/*
 * ex3.c
 *
 *  Created on: ٠٢‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */

#include <stdio.h>

int main(void){
	float temperature_celsius,temperature_fehrn;
	printf("enter temperature in degree celsius\r\n");
	fflush(stdout);
	scanf("%f",&temperature_celsius);
	temperature_fehrn= ( temperature_celsius * (9 / 5) ) + 32;
	printf("temperature in degree fehrn= %f",temperature_fehrn);
	return 0;
}
