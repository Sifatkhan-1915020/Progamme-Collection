//transpose matrix

//transpose square matrix is a derived matrix when we exchange the values of Aij and Aji.

#include <iostream>

using namespace std;

int main()
 {  
   
 	int array [4][3]= {
	         
			  { 3,2,1},{5,6,7},{8,9,0},{2,3,4}
			    
		      };
	
	int transpose[3][4];
		      
    for(int i=0;i<4;i++)
     {
     	for(int j=0;j<3;j++)
     	 {  
     	    transpose[j][i]=array[i][j];
		  }
	 }
	 
	 
	 for(int i=0;i<3;i++)
     {
     	for(int j=0;j<4;j++)
     	 {
     	 	cout<<transpose[i][j]<<" ";
		  }
		  cout<<endl;
	 }
 }