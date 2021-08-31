#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int cmp(char s1[],char s2[])
{

	
	int i=0;
	while(s1[i]!='\0')
	 {
	 	s2[i]=s1[i];
	 	i++;
	 }
	puts(s2);
}

int main()
 {
 	char s1[]=" hello elo melo p";
 	char s2[100];
 	puts(s1);
 	printf("\n");
 	cmp(s1,s2);
 }