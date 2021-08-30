//accesing the particular component 

#include <stdio.h>
#include <stdlib.h>

int main()
 {
 	int a[3][3]={
	      
	        {1,2,3},{2,4,5},{7,8,10}
	  
	  };
	   
	  int *ptr=a;  //pointing the first element of the array
	  
	 for(int i=0;i<3;i++ )
	   {
	   	 for(int j=0;j<3;j++)
	   	 {
	   	 	if(i==2&&j==2)
	   	   {
	   	   	  printf("the element of 2,2 position in array is %d  ",*(ptr+i*3+j));
	   	   	  break;
			  }
			}
	   }
	    
			printf("\n");
	   
 }