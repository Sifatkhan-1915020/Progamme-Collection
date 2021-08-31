#include <stdio.h>
#include <string.h>


int str_len(char s[])
{
	int i=0;
	while(s[i]!=0)
	{
		i++;
	}
	return i;
}

 int  str_comp(char s1[],char s2[])
  {
  	char dm;
  	scanf("%c",&dm);
  	  int k1=str_len(s1);
  	  int k2=str_len(s2);
  	  int  checker=(k1<k2) ? k1:k2;
  	  
  	 printf("%d  %d %d",k1,k2,checker);
  	  int flag=0;
  	  for(int i=0;i<checker;i++)
  	   {
  	   	 if(s1[i]!=s2[i])
  	   	  {
  	   	  	flag=-1;
  	   	  	break;
			   }
		 
		 }
  	
  	if(flag==0)
  	 printf("mil ache");
  	if(flag==-1)
  	 printf("\nmil nai");
  	   
  }
  
  int main()
   {
   	  char s1[]="smol kitty";
   	  char s2[]="smol kitty";
   	  
   	  str_comp(s1,s2);
   	  
   }