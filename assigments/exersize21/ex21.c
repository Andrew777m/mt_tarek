/*
 * ex21.c
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
  if(n%2==0)
  for(i=0;i<n;i++){

	  for(j=0;j<=n;j++){
		  if(i==j || j==n-1-i  )
		  {
			  if(i==j-1||j==n-1-i){

			  printf(" ");
		  }
			  printf("*");
		  }
		  else
		  {
			  printf(" ");
			  printf(" ");
		  }
	  }

	  printf("\r\n");
  }





  return 0;
}
