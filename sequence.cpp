#include <iostream>

using namespace std;

int main()
  {
  	for(int i=1;i<=5;i++)
  	 { 
  	   for(int space=5-i;space>=1;space--)
  	      {
  	      	cout<<" ";
			}
  	 	for(int j=1;j<=i;j++)
  	 	  {
  	 	  	if(j%2!=0)
  	 	  	 cout<<0;
  	 	  	if(j%2==0)
  	 	  	 cout<<1;
  	 	  	 
			 }
			 cout<<endl;
	   }
  }