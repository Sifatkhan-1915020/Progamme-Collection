#include <iostream>
#include <math.h>

using namespace std;

int digitcounter(int n)
  {
    int i=0;
 
  	
  	 while((n!=0))
  	 {  
  	   
  	 	
  	 	i++;
  	 	n=n/10;
	   }
	   
	   return i;
	   
	   
	   }
	   
int reverse(int n)
 {
 	int dc=digitcounter(n),a,i=1,sum=0;
 	cout<<dc<<endl;
 	
 	 while(n!=0)
 	  { 
 	  	a=n%10;
 	  	cout<<a<<endl;
 	  	sum=sum+a*pow(10,dc-i);
 	  	cout<<sum<<endl;
 	  	n=n/10;
 	  	i++;
	   }
	   
	   cout<<sum;
 }
 
 int main()
  {
  	 reverse(1234);
  }