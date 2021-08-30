#include  <iostream>

using namespace std;

int prime_checker(int n)
 {  
    int i=2;
    int flag=0;
    if(n==1)
     flag=-1;
     
 	while(i<=n/2)
 	 {
 	 	if(n%i==0)
 	 	 flag=-1;
 	 	
 	 	i++;
	  }
	  return flag;
 }


int prime_finder(int n)
 {
 	int m=2;
 	int i=0;
     
     while(1)
      {
      	if(prime_checker(m)==0)
      	 {
      	 	i++;
      	 	 
		   }
		if(i==n)
		 {
		 	cout<<m;
		 	break;
		 }
		 
		 m++;
	  }
 }



int main()
 {
    /*int n1,n2;
     cin>>n1>>n2;
     n1++;
     int i=0;
     while(n1<n2)
      {  
         
         if(prime_checker(n1)==0)
           {
			cout<<n1<<" ";
			i++;
		}
         n1++;
	  }
	  cout<<"the total prime number is "<<i;*/
	  prime_finder(1);
 }