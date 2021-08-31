#include <string.h>
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

int non_gap_str_len(char s[])
 {
 		int i=0;
 		int k=0;
	while(s[i]!=0)
	{
		i++;
		
		if(s[i]==' ')
		k++;
	}
	return i-k;
 }

int main()
{
	char s[100];
	gets(s);
	printf("\n %d",str_len(s));
	printf("\n %d",non_gap_str_len(s));
}