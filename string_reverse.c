#include <string.h>
#include <stdlib.h>

//finding the length of the string 
int str_len(char s[])
{
	int i=0;
	while(s[i]!=0)
	{
		i++;
	}
	return i;
}

//finding the 

int string_reverse(char s[])
 {
     int i =str_len(s);
     
     while(i>=0)
      {
      	printf("%c",s[i]);
      	i--;
	  }
 }
 
 int main()
  {
  	char s[]="ami akash pathabo";
  	//printf("%d",str_len(s));
  	string_reverse(s);
  }