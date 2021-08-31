//string compare 

#include <string.h>
#include <stdio.h>

int string_appending(char s1[],char s2[])
{
    char pos;
    scanf("%c",&pos);
    
    if(pos=='b')
     printf("%s%s",s2,s1);
    if(pos=='e')
     printf("%s%s",s1,s2);
}



int main()
 {
 	char s1[]="je rajar rani nai shey raja gaja khay";
 	char s2[]="Mathar bhitor gaja ghure gajar bhitor e matha";
 	
 	string_appending(s1,s2);
 }