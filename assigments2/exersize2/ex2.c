/*
 * ex2.c
 *
 *  Created on: ٠٥‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void alpha(char x);

int main(void){
  char num;
  scanf("%c",&num);
  alpha(num);
  return 0;
}
void alpha(char x){

	if(((x >= 97) && (x <= 122)) || ((x >= 65) && (x <= 90)))
	{
		printf("this char is alphapet \t\n");
	}
	else
	{
		printf("this char is not alphapet \t\n");
	}

}

