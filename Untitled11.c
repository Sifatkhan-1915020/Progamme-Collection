#include <stdio.h>


 int main()
  {
  	int *p,x[4]={1,2,3,4};
  	int q=4;
  	for(p=x;p<=q;p++)
  	 {
  	 	printf("%d",++(*p));
	   }
  }