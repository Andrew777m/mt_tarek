/*
 * ex1.c
 *
 *  Created on: ٠٥‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int cube(int x);

int main(void){
  int num;
  scanf("%d",&num);
  printf("the cube number is : %d",cube(num));
  return 0;
}
int cube(int x){

	return pow(x,3);

}
