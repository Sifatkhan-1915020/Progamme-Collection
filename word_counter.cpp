
#include <stdio.h>
#include <stdlib.h>

int str_len(char s[])
{
	int i=0;
	while(s[i]!=0)
	{
		i++;
	}
	return i;
}

int wordCounter(char s[])

 {
     int previous=0, counter=0,first;
	 int strlen=str_len(s);
	// int array[];
	  for(int i=0;i<strlen;i++)
	   {
	   	 if(s[i]==' ')
	   	   {
	   	   	 first=i;
			  
	   	  if((first-previous)!=1)
	   	    counter++;
	   	  
		previous=first;
	     }
	   }
	   
	   printf("%d   ",counter);
    
    if(s[0]==' '&&s[strlen-1]!=' ')
       printf("%d", counter);
       
    else if(s[strlen-1]==' '&&s[0]!=' ')
       printf("%d", counter);
       
     else if(s[0]==' '&& s[strlen-1]==' ')
      {
      	  printf("%d", counter-1);
	  }
    else
      printf("%d", counter+1);
 
 }
 
 int main()
  {
  	char s[]="  he   l   lo  kuet  deut  rtrtr       rtrtrtrt    4545455  ";
  	 char search[]="hello";
  	 
       wordCounter(s);
  	 
  }