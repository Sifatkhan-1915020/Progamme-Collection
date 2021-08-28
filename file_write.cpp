#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
 {
 	FILE *fp;
 	
 	char ch[80];
 	
 	fp=fopen("My_Tukki.txt","w");
 	
 	if(fp==NULL)
 	 {
 	 	puts("Hello bro stop this");
 	 	fclose(fp);
 	 	
	  }
	  
	while(strlen(gets(ch))>0)
	 {
	 	fputs(ch,fp);
	 	fputs("\n",fp);
	 }
	 fclose(fp);
 }