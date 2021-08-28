#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
 {
 	FILE *fr,*fw;
 	
 	char ch_read,ch_write;
 	
 	
 	fr=fopen("cringe.txt","r");
 	fw=fopen("banki.txt","w");
 	
 	
 	if(fr==NULL)
 	 {
 	 	puts("No file is here");
 	 	fclose(fr);
	  } 
	  
	  	if(fw==NULL)
 	 {
 	 	puts("No written file is here");
 	 	fclose(fw);
 	 
 	 
	  } 
	  
 	while(1)
 	 {
 	 	ch_read=fgetc(fr);
 	 	
 	 	if(ch_read==EOF)
 	 	 {
			puts("\n\n\a\a\a\a\a\amaal nai ar");
			break;
		}
 	 	
 	 	printf("%c",ch_read);
 	 	fputc(ch_read,fw);
	  }
	  
	  fclose(fr);
	  fclose(fw);
 }