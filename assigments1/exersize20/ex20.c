/*
 * ex20.c
 *
 *  Created on: ٠٣‏/٠٨‏/٢٠٢٢
 *      Author: dell pc
 */
   #include <stdio.h>
#include <stdlib.h>
int main(void){
  int n;
  printf("enter number of row \r\n");
  fflush(stdout);
  scanf("%d",&n);
  int i,j;
  for(i=0;i<n;i++){

	  for(j=0;j<n*2-1;j++){
		  if(j < ((( n * 2 )-1) / 2 )- i ||j > ((( n * 2 )-1) / 2 )+ i  )
		  {
			  printf(" ");
		  }
		  else
		  {
			  printf("*");
		  }
	  }

	  printf("\r\n");
  }





  return 0;
}

