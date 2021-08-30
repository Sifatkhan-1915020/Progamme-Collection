//banking system 

#include "stdio.h"
#include "conio.h"
#include "stdlib.h"
#include "windows.h"

void gotoxy(int x,int y)
 {
 	COORD pos={x,y};
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
 }




int main()
 {
 	FILE *fp,*fw;
 	char another ,select;
 	
 	struct data{
 		
 		char name[40];
 		float deposite;
 		float add;
 		float withdraw;
	 };
	 
	 struct data d;
	 char dataname[40];
	 long long int resize;
	 
	 fp=fopen("Bank_Log_Data.DAT","rb+");
	 
	 if(fp==NULL)
	  {
	    fp=fopen("Bank_Log_Data.DAT","wb+");
	      if(fp==NULL)
	       {
	       	puts("ERROR ,FILE CANT BE OPEN");
	       	fclose(fp);
	       	exit(0);
		   }
	  }
	 
	 resize=sizeof(d);
	 
	 
	 
	 while(1)
	  {
	  	gotoxy(20,5);
	  	 printf("Welcome  TO  Bangu  Bank ");
	  	gotoxy(20,7);
	  	 printf("1.Open Account");
	  	 	gotoxy(20,8);
	  	 printf("2.Add Money");
	  	 	gotoxy(20,9);
	  	 printf("3.Withdraw Money");
	  	 	gotoxy(20,10);
	  	 printf("4.exit");
	  	   	gotoxy(20,14);
	  	 printf("give your choice");
	  	 
	  	 fflush(fp);
	  	 select=getche();
	
	  
	   switch(select)
	    {
	    	case'1':
	    		 printf("\nplease write name deposite \n");
	    		 scanf("%s %f",&d.name,&d.deposite);
	    		 break;
	    		 
		}
		
	}
	 
 }