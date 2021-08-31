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



int main()
 {
 	char ch[100];
 	gets(ch);
 	int remover;
 	scanf("%d",&remover);
 	int k=str_len(ch);
 	
 	printf("%d",k);
 	
 	for(int i=k-1;i>k-1-remover;i--)
 	  {
 	     ch[i]=' ';
	   }
	 printf("%s",ch);
 }