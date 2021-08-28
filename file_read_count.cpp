#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	
	char ch;
	char x;
	scanf("%c",&x);
	
	int noc,tab,space;
	
	fp=fopen("meaw.txt","r");
	
	while(1)
	 {
	 	ch=fgetc(fp);
	 	
	 	if(ch==EOF)
	 	 break;
	 	 
	 	 noc++;
	 	 
	 	 if(ch==x)
	 	  space++;
	 	  
	 	 if(ch=='\t')
	 	 tab++;
	 	 
	 	
	 	printf("%c",ch);
	 
	 }
	 	printf("%d %d %d ",noc,space,tab);
	
}