#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
 {
 	char *ptr;
 	char name[]="meaw  meaw";
 	
 	ptr=name;
 	
 	while(*ptr!='\0')
 	 {
 	 	printf("%c",*ptr);
 	 	ptr++;
	  }
	  
 }