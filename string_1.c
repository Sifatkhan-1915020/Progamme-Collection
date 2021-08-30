#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
 {
 	char ch[]="kilhdeh  dehde";
 	int i=0;
 	int k=0;
 	while(ch[i]!='\0')
 	 {
 	 	printf("%c",ch[i]);
 	    i++;
		
		if(ch[i]==' ') 
		k++;
 	    
 	    
	  }
	  printf("\n\a\a%d  %d  %d",i,k,i-k);
 }