#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>


void gotoxy(int x,int y)
 {
 	COORD pos={x,y};
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
 



int main()
 {  
    
 	FILE *fp,*fw;
 	
 	char another,choice;
 	
 	struct emp {
 		char name[40];
 		int age;
 		int salary;
	 };
	 
	 struct emp e;
	 char empname[40];
	 long int resize;
	 
	 fp=fopen("EMP.txt","rb+");
	 
	 if(fp==NULL)
	  {
	  	fp=fopen("EMP.DAT","wb+");
	  	 if(fp==NULL)
	  	  {
	  	  	puts("this file is not ready to open");
	  	  	exit(0);
			}
	  }
	  
	  resize=sizeof(e);
	  
	  while(1)
	   {
	   	//system("clear");
	   	
	   	gotoxy(50,10);
	   	printf("1.Add Records");
	   	gotoxy(50,12);
	   	printf("2.List Records");
	   	gotoxy(50,14);
	   	printf("3.Modify Records");
	   	gotoxy(50,16);
	   	printf("4.Delete Records");
	   	gotoxy(50,18);
	   	printf("0.Exit");
	   	gotoxy(50,20);
	   	printf("Your Choice");
	   	
	   	fflush(stdin);
	   	
	   	choice==getche(); 
	   	
	   	switch(choice)
	   	 {
	   	 	case'1':
	   	 		 fseek(fp,0,SEEK_END);
	   	 		 another='Y';
	   	 		 
	   	 		  while(another=='Y')
	   	 		   {
	   	 		   	 printf("Please Enter the name ,age,sal");
	   	 		   	 scanf("%s %d %f",e.name,&e.age,&e.salary);
	   	 		   	 fwrite(&e,resize,1,fp);
	   	 		   	 printf("\n Add another record(Y/N): ");
	   	 		   	 fflush(stdin);
	   	 		   	 another=getche();
					   }
					   break;
					   
			case'2':
				 rewind(fp);
				  
				  while(fread(&e,resize,1,fp)==1)
				   {
				   	printf("\n %s %d %f",e.name,e.age,e.salary);
				   	break;
				   }
				   
			case '3':
				 another='Y';
				 while(another=='Y')
				  {
				  	printf("\n Enter the name to modify");
				  	scanf("%s",empname);
				  	
				  	rewind(fp);
				  	while(fread(&e,resize,1,fp)==1)
				  	 {
				  	 	if(strcmp(e.name,empname)==0)
				  	 	 {
				  	 	 	printf("\nEnter the new name,age,salary");
				  	 	 	scanf("%s %d %f",e.name,&e.age,&e.salary);
				  	 	 	fseek(fp,-resize,SEEK_CUR);
				  	 	 	fwrite(&e,resize,1,fp);
				  	 	 	break;
							}
					   }
					   printf("\n Modify Another Record(Y/N)");
					   fflush(stdin);
					   another=getche();
				  }
				  break;
			}
	   	  
	   }
	   
	   
 }