/*
 * ex9.c
 *
 *  Created on: ٠٢‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */

#include <stdio.h>
#include <stdlib.h>
int main(void){
	float grade;
			printf("enter your grade\r\n");
			fflush(stdout);
			scanf(" %f",&grade);

			if(grade<=100 && grade>=85)
			{
				printf("Excellent\r\n");
			}


			else if(grade<85 && grade>=75)
			{
				printf("Very Good\r\n");
			}

			else if(grade<75 && grade>=65)
						{
							printf(" Good\r\n");
						}
			else if(grade<65 && grade>=50)
									{
										printf(" Pass\r\n");
									}
			else
									{
										printf(" fail\r\n");
									}


  return 0;
}
