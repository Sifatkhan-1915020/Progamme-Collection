#include<iostream>


using namespace std;


int main()
{
	int level;
	cin>>level;
	
	for(int i=1;i<=2*level-1;i++)
	 {
	 	 if(i<=level)
	 	  {
	 	  	for(int j=i;j>=1;j--)
	 	  	 {
	 	  	 	cout<<j;
				}
				cout<<endl;
		   }
		 if(i>level)
		  { 
		    int k=level-(i%level);
		  	for(int j=k;j>=1;j--)
		  	 {
		  	 	cout<<j;
			   }
			   cout<<endl;
		  }
	 }
}