#include "stdio.h" 
#include "windows.h"
#include "conio.h"

void gotoxy(int x,int y)
 {
 	COORD pos={x,y};
 	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
 }

main( ) 
{ 
 
 system("clear");

 FILE *fp, *ft ; 
 char another, choice ; 
 struct emp 
 { 
 char name[40] ; 
 int age ; 
 float bs ; 
 } ; 
//Chapter 12: File Input/Output 443
 struct emp e ; 
 char empname[40] ; 
 long int recsize ; 
 fp = fopen ( "EMP.DAT", "rb+" ) ; 
 if ( fp == NULL ) 
 { 
 fp = fopen ( "EMP.DAT", "wb+" ) ; 
 if ( fp == NULL ) 
 { 
 puts ( "Cannot open file" ) ; 
 //exit(0) ; 
 } 
 } 
 recsize = sizeof ( e ) ; 
 while ( 1 ) 
 { 
 //clrscr( ) ; 
 gotoxy ( 30, 10 ) ; 
 printf ( "1. Add Records" ) ; 
 gotoxy ( 30, 12 ) ; 
 printf ( "2. List Records" ) ; 
 gotoxy ( 30, 14 ) ; 
 printf ( "3. Modify Records" ) ; 
 gotoxy ( 30, 16 ) ; 
 printf ( "4. Delete Records" ) ; 
 gotoxy ( 30, 18 ) ; 
 printf ( "0. Exit" ) ; 
 gotoxy ( 30, 20 ) ; 
 printf ( "Your choice" ) ; 
 fflush ( stdin ) ; 
 choice = getche( ) ; 
//444 Let Us C 
 switch ( choice ) 
 { 
 case '1' : 
 fseek ( fp, 0 , SEEK_END ) ; 
 another = 'Y' ; 
 while ( another == 'Y' ) 
 { 
 printf ( "\nEnter name, age and basic sal. " ) ; 
 scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ; 
 fwrite ( &e, recsize, 1, fp ) ; 
 printf ( "\nAdd another Record (Y/N) " ) ; 
 fflush ( stdin ) ; 
 another = getche( ) ; 
 } 
 break ; 
 
 case '2' : 
 rewind ( fp ) ; 
 while ( fread ( &e, recsize, 1, fp ) == 1 ) 
 printf ( "\n%s %d %f", e.name, e.age, e.bs ) ; 
 break ; 
 case '3' : 
 another = 'Y' ; 
 while ( another == 'Y' ) 
 { 
 printf ( "\nEnter name of employee to modify " ) ; 
 scanf ( "%s", empname ) ; 
 rewind ( fp ) ; 
 while ( fread ( &e, recsize, 1, fp ) == 1 ) 
//Chapter 12: File Input/Output 445
 { 
 if ( strcmp ( e.name, empname ) == 0 ) 
 { 
 printf ( "\nEnter new name, age & bs" ) ; 
 scanf ( "%s %d %f", e.name, &e.age, 
 &e.bs ) ; 
 fseek ( fp, - recsize, SEEK_CUR ) ; 
 fwrite ( &e, recsize, 1, fp ) ; 
 break ; 
 } 
 } 
 printf ( "\nModify another Record (Y/N) " ) ; 
 fflush ( stdin ) ; 
 another = getche( ) ; 
 } 
 break ; 
 

 } 
 } 
}