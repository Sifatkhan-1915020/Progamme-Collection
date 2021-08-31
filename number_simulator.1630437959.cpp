// prime number simulation

#include <bits/stdc++.h>
#include <conio.h>

using  namespace std;

int prime_checker(int n)
 {  
 
     int flag=0;
     if(n==1)
	   {
	   	flag=-1;
		} 
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
 
 
 int prime_printer(int n1,int n2)
   {
   	 
   	  for(int i=n1;i<=n2;i++)
   	    {
   	    	int flag=0;
   	       for(int j=2;j<=i/2;j++)
   	    	 {
   	    	 	if(i%j==0)
   	    	 	 {flag++;
   	    	 	   break;
				
				}
				 }
				 
				 if(flag==0)
				  {
				  	cout<<i<<" ";
				  }
		   }
   }
   
   
   //fibonacci number simulator
    
    int fibonacci_checker(int n)
     {
     	 int  first=1,second,j;
        //cout<<first<<" ";
        int  previous=0;
    	for(int i=1;i<=100;i++)
    	 {
    	 	second=first+previous;
    	 	// cout<<second;
    	 	 if(n==second)
    	 	  {
    	 	  	j=i;
    	 	  	cout<<j;
    	 	    break;
			   }
			   
			 if(n>second)
			  {
			  	cout<<"this is not a fibonacci number";
			  	break;
			  }
    	 	previous=first;
    	 	first=second;
		 }
	 }
   
   
   
   
    int  fibonacci_printer(int n)
    {   
        int  first=1,second;
        cout<<first<<" ";
        int  previous=0;
    	for(int i=1;i<=n;i++)
    	 {
    	 	second=first+previous;
    	 	cout<<second<<" ";
    	 	previous=first;
    	 	first=second;
		 }
	}
 
 //digit operation simulator
 
  int digitcounter(int n)
   { 
     int i=1;
   	 for(i;;i++)
   	  { 
   	    int power=pow(10,i);
   	
   	  	if(n/power==0)
   	  	  {
   	  	  //	cout<<i;
   	  	  	break;
			   }
		 }
		 
		 return i;
   }
 
 int numberReverse(int n)
  {
  	int  digitCount=digitcounter(n);
  	 //cout<<digitCount;
  	  int sum=0;
  	 
  	 for(int i=1;i<=digitCount;i++)
  	  {
  	  	   int finder=n%10;
  	  	    sum=sum+(finder*pow(10,digitCount-i));
  	  	    n=n/10;
  	  	    if(n/10==0)
  	  	     continue;
		}
  	  return sum;
  }
 
 //polyndrom number
 
 int polyndrom_checker(int n)
       {
       	int temp=n;
        int reverse= numberReverse(n);
        if(temp==reverse)
         return 1;
        if(temp!=reverse)
		 return 0;
	   }
 int polyndrom_printer(int n)
    {  
      int k=0;
    	for(int i=10;;i++)
    	 {
    	 	if(polyndrom_checker(i)==1)
    	 	 {
    	 	 	cout<<i<<" ";
    	 	 	k++;
			  }
			if(k>n)
			 break;
		 }
	}
	   
 //factorization simulation
  
  int factorial(int n)
   { 
     int num=1;
   	 for(int i=1;i<=n;i++)
   	  {
   	  	num=num*i;
		 }
	  return num;	 
   }
 
 
  int factor(int n)
   {
   	 for(int i=1;i<=n;i++)
   	  {
   	  	if(n%i==0)
   	  	 { 
			  cout<<i<<" ";
   	  	      
			  }
		 }
   }
   
   int primeFactor(int n)
    {
    	for(int i=1;i<=n;i++)
    	 {
    	 	if(n%i==0)
    	 	 {
    	 	 	if(prime_checker(i)==0)
    	 	 	 cout<<i<<" ";
			  }
		 }
	}
    //series 1+2+3+4+5.......
    
    int series_0(int n)
     {
     	int sum=0;
     	 for(int i=1;i<=n;i++)
     	  {
     	  	sum=sum+i;
     	  	
		   }
		   return sum;
	 }
    
   // series  1/1!+2/2!+3/3!.....
   
    int series_1(int n)
     {  
        float sum=0;
     	for(float  i=1;i<=n;i++)
     	 {
     	 	 sum=sum+(i/factorial(i));
		  }
		  
		  cout<<sum;
	 }
   
   // trianular series
   
    int triangular (int n)
     {
        int sum=0;
        
        for(int i=1;i<=n;i++)
         {  
            cout<<series_0(i)<<" ";
         	sum=sum+series_0(i);
		 }
         cout<<sum;
         
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
 	      cout<<endl;
 	      
 	    prime_printer(5,number);
 	    cout<<endl;
 	    fibonacci_printer(10);
 	    cout<<endl;
 	    fibonacci_checker(12);
	    digitcounter(number);
	    numberReverse(number);
	    polyndrom_checker(number);
	    polyndrom_printer(number);
	    factor(number);
	    primeFactor(number);
	    cout<<factorial(number);
	    series_1(number);
	    triangular (number); 
	  //  cout<<series_0(number);
	     
 }