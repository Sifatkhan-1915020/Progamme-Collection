#include <iostream >


using namespace std;

int main()
  {
  	
  	int level=5;
  	  
  	  for(int i=1;i<=level;i++)
  	   { 
  	   
  	     for(int space=level-i;space>=0;space++)
  	       {
  	       	  cout<<" ";
			 }
  	   	for(int j=1;j<=level;j++)
  	   	  {
  	   	  	  if(j%2==0)
  	   	  	   cout<<1;
  	   	  	  if(j%2!=0)
  	   	  	   cout<<0;
			   }
			cout<<endl;
		 }
  	
  }