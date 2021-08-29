// prime number simulation

#include <bits/stdc++.h>
#include <conio.h>

using  namespace std;

int prime_checker(int n)
 {  
 
     int flag=0;
     
 	for(int i=2;i<=n/2;i++)
 	 {
 	 	if(n%i==0)
 	 	 {
 	 	 	flag=-1;
 	 	 	break;
		   }
	
	  }
	  return flag;
 }
 
 int prime_finder(int n)
   {
   	  int count=0,num=2,latest=0;
   	
   	  
   	  while(count!=n)
   	   {
   	   	 int flag =0;
   	   	 for(int i=2;i<=sqrt(num);i++)
   	   	  {
   	   	  	 if(num%i==0)
   	   	  	  {
   	   	  	  	flag++;
   	   	  	  	break;
					  }
				}
				
		 if(flag==0)
		  {
		  	count++;
		  	latest=num;
		  }
		  num++;
		  
		  
   }
   
   cout<<n<<" "<<latest;
   
}
 
 
 int main(){
 	  
 	  cout<<"Give a number here";
 	  int number;
 	  cin>>number;
 	    
 	    if(prime_checker(number)==-1)
 	      cout<<"it is not  prime number";
 	    else
 	      cout<<"it is a prime number ";
 	     prime_finder(number);
	
 }