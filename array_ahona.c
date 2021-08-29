#include <stdio.h>
#include <math.h>

int main()
 {
 	int array[4][4];
 	
 	 for(int i=0;i<4;i++)
 	  {
 	  	for(int j=0;j<4;j++)
 	  	  {
 	  	  	if(i==0||j==0)
 	  	  	{
				 
 	  	  	  array[i][j]=(i+1)*(j+1);
				   }
            else 
			  {
			  	array[i][j]=array[0][j]*array[i][0];
			  	
								} 	  	  	 
			 }
	   
         }
	   for(int i=0;i<4;i++)
 	  {
 	  	for(int j=0;j<4;j++)
 	  	  {
 	  	  	
		     printf("%d  ",array[i][j])	;  	
								} 
								
					printf("\n");				  	  	 
			 }
	   
 }