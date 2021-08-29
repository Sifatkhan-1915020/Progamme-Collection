#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
  {
  	// equation looks like ax^2+bx+c=0
  	
  	float  a;
  	float  b;
  	float  c;
  	float  x1,x2,x,x3;
  	
  	printf("Serially Give the value of X^2 ,x and constant term");
  	scanf("%f %f %f",&a,&b,&c);
  	
  	if(a==0)
  	 {
  	 	x=-b/c;
  	 	printf("%f",x);
	   }
	else if((pow(b,2)-4*a*c)<0)
	   {
	   	 printf("There is no real value of roots");
	   	 x3=(-b+sqrt(b*b-4*a*c))/(2*a);
	   	 printf("%f",x3);
	   	 
	   }
	else 
	  {
	  	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	  	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	    	printf("the roots are %f and %f",x1,x2);	
	  }

  }