#include <stdio.h>
#include <stdlib.h>

struct student {
	float  sub1;
	float  sub2;
	float  sub3;
	  
};

int main()
 {  
    float total_pro=0;
    int n;
    scanf("%d \n",&n);
 	struct student stu[n];
 	 
 	 for(int i=0;i<n;i++)
 	   {
 	   	 scanf("%f",&stu[i].sub1);
 	   	  scanf("%f",&stu[i].sub2);
 	   	   scanf("%f",&stu[i].sub3);
 	   	 
		}
	
	for(int i=0;i<n;i++)
	 {  
	    
	 	float total=stu[i].sub1+stu[i].sub2+stu[i].sub3;
	    printf("total of student [%d] , %f \n",i+1,total);
	    total_pro=total_pro+total;
	 }
	 
 	 printf("%f",total_pro);
 }