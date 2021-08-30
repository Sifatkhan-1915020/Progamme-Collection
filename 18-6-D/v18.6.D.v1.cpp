//v18.6.D.p1

#include <stdio.h>
#include <stdlib.h>

int main()
 {
 	int a[4][3]={
	      
	        {1,2,3},{2,4,5},{7,8,10},{11,23,34}
	  
	  };
	  
	  int *ptr=a;
	  
	  for(int i=0;i<4;i++)
	   {
	   	 for(int j=0;j<3;j++)
	   	   {
	   	   	  printf("%d  ",*(ptr+i*3+j));
	   	   	  
			  }
			printf("\n");
	   }
 }