//appending file-1 to file-2

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
 {
 	FILE *f1,*f2 ; // placing the file in to buffer
 	
 	char ch;   //data type retrived as character type
 	
 	f1=fopen("file_1.txt","r") ; // calling the f1 file to read in the program
 	f2=fopen("file_2.txt","w");  //calling the f2 ile to write 
 	
 	if(f1==NULL)
 	 {
 	 	puts("ei file e maal nai");
 	 	fclose(f1); // if there is no file ,close the file 
 	 	exit(0);
	  }
	
	if(f2==NULL)
	 {
	 	puts("ki re bhai maal nai toh ");
	 	fclose (f2); //if there is no data to write in the f2 from f1
	 	exit(0);
	 }
	 
	 while(1)
	  {
	  	ch=fgetc(f1); //taking the data from f1
	  	
	    if(ch==EOF)  //if there is no more data left in the file to read
	     {
	     	puts("jinish furay gese");
	     	break;
		 }
		 
		 fputc(ch,f2);
	     
	  }
	  
	  fclose(f1);
	  fclose(f2);
 	
 }