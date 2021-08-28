#include <stdio.h>
#include <stdlib.h>

main( ) 
{ 
  FILE *fp;
  
  int  ch;
  
  fp=fopen("ac.mp4","r");
  
  while(1)
  {
  	ch=fgetc(fp);
  	 if(ch==EOF)
  	  break;
  	  printf("%d",ch);
	  }    
	  fclose(fp);
} 