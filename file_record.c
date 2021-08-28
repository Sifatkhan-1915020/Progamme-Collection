#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main()
 {
 	FILE *fp;
 	char another='Y';
 	
 	struct rec{
 		
 		 char name[40];
 		 int age;
 		 float income;
 		 char id[10];
 		
	 };
	 
	 struct rec r;
	 
	 fp=fopen("Recorder.txt","w");
	 
      if(fp==NULL)
       {
       	puts("Abbey peter vagiye ap");
	   }
	  
	  while(another=='Y')
	  {
	  	printf("Name Age Incoem Id Number");
	  	scanf("%s %d %f %s",&r.name,&r.age,&r.income,&r.id);
	  	fprintf(fp,"%s %d %f %s",r.name,r.age,r.income,r.id);
	  	
	  	printf("Add another record(Y/N)");
	  	fflush(stdin);
	  	another=getche();
	  
	  }
	  fclose(fp);
 }