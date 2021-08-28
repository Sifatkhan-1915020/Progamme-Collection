#include <bits/stdc++.h>

using namespace std;

 //half pyramid(left)
 
 int half_pyramid_left()
  {
  	 int number;
  	 cin>>number;
  	 
  	  for(int i=1;i<=number;i++)
  	   {
		 for(int j=1;j<=i;j++)
  	    {
  	    	cout<<" * ";
		  }
		  cout<<endl;
      }
  }


 //half pyramid(right)
 
 int  half_pyramid_right()
  { 
    int n;
    cin>>n;
  	
  	for(int i=1;i<=n;i++){
	  
  	 for(int j=1;j<=n;j++)
  	 { 
  	    if(j==n||j>n-i)
  	     cout<<" * ";
  	    else
  	     cout<<"   ";
	   }
  	   cout<<endl;
}

}

//upside down pyramid
int upside_down_pyramid()
  {
  	 int number;
  	 cin>>number;
  	 
  	  for(int i=number;i>=1
		;i--)
  	   {
		 for(int j=i;j>=1;j--)
  	    {
  	    	cout<<" * ";
		  }
		  cout<<endl;
      }
  }

//full Pyramid 

int full_pyramid()
 {
 	 int n;
 	 cin>>n;
 	   
 	   for(int i=0;i<n;i++)
 	    {
 	    	for(int j=1;j<=2*n-1;j++)
 	    	 {
 	    	 	if(j>=n-i&&j<=n+i)
 	    	 	 cout<<"*";
 	    	 	 else
 	    	 	 cout<<" ";
			  }
			  cout<<endl;
		 }
 	 
 }
 
 //upside down full Pyramid 

  int ud_full_pyramid()
 {
 	 int n;
 	 cin>>n;
 	   
 	   for(int i=n;i>0;i--)
 	    {  
 	      
 	    	for(int j=1;j<=2*n-1;j++)
 	    	 {
 	    	    if(j>=(n-(i-1))&&j<=(n+(i-1)))
 	    	     cout<<"*";
 	    	     else
 	    	      cout<<" ";
			  }
			  cout<<endl;
		 }
 	 
 }
 
 //side pyramid left
 
 int RS_full_pyramid()
 {
 	 int n;
 	 cin>>n;
 	   
 	   for(int i=1;i<=2*n-1;i++)
 	    {
 	    	for(int j=0;j<n;j++)
 	    	 {
 	    	 	if(i>=n-j&&i<=n+j)
 	    	 	 cout<<"*";
 	    	 	 else
 	    	 	 cout<<" ";
			  }
			  cout<<endl;
		 }
 	 
 }

// side pyramid right

int LS_full_pyramid()
 {
 	int n;
 	cin>>n;
 	
 	for(int i=2*n-1;i>=1;i--)
 	 {
 	 	for(int j=n;j>0;j--)
 	 	 {
 	 	 	if(i>=(n-(j-1))&&i<=(n+(j-1)))
 	    	 	 cout<<"*";
 	    	 	 else
 	    	 	 cout<<" ";
		   }
		cout<<endl;
 }
}
 
//rombas
  
  int rombas()
  {
  	int n;
  	cin>>n;
  	
  	  for(int i=0;i<n;i++)
  	   {
  	   	 for(int j=1;j<=2*n-1;j++)
  	   	   {
  	   	   	  if(j>=(n-i)&&j<=(2*n-i-1))
  	   	   	   cout<<" * ";
  	   	   	   else
  	   	   	    cout<<" ";
				}
				cout<<endl;
		 }
  }
  
  //parallelo gram
  
  int parallelogram()
   {
   	int n,m;
   	 cin>>n>>m;
   	   for(int i=0;i<n;i++)
  	   {
  	   	 for(int j=1;j<=2*m-1;j++)
  	   	   {
  	   	   	  if(j>=(m-i)&&j<=(2*m-i-1))
  	   	   	   cout<<" * ";
  	   	   	   else
  	   	   	    cout<<" ";
				}
				cout<<endl;
		 }
   	   
   }
   
   // circle 
   
   int circle()
    {
    	float radius;
    	cin>>radius;
    	float pr=2;
    	 for(float i=-radius;i<=radius;i++)
    	  {
    	  	for(float j=-radius;j<=radius;j++)
    	  	 {
    	  	 	float d=((i*pr)/radius)*((i*pr)/radius)+(j/radius)*(j/radius);
    	  	 	
    	  	 	 if(d>1.00&&d<1.07)
    	  	 	  cout<<"*";
    	  	 	  else
    	  	 	   cout<<" ";
			   }
			   cout<<endl;
		  }
         
	}
	
	int donut()
	 {
	 	cout<<"Sir,Tell us how much bigger donut you want";
	 	float size;
	 	cin>>size;
	 	
	 	float pixelRatio=2; // ratio for eqalizing pixel width and height
	 	
	 	 for(float i=-size;i<=size;i++)
	 	  {
	 	  	for(float j=-size;j<=size;j++)
	 	  	 {
	 	  	 	float d=((i*pixelRatio)/size)*((i*pixelRatio)/size)+(j/size)*(j/size);
	 	  	 	  if(d>0.20&&d<1.08)
	 	  	 	  cout<<"*";
	 	  	 	  else
	 	  	 	  cout<<" ";
	 	  	 	  
				}
				
				cout<<endl;
		   }
	 }
	 
	 
	 // number pattern 
	  
	  
	  // pascale triangle 
	  
	  
	  int pascaleTriangle()
	  {
	  	 int n;
	  	 cin>>n;
	  	 
	  	 for(int i=1;i<=n;i++)
	  	   { 
	  	     int coef=1;
	  	    
	  	   	 for(int k=(n-i);k>0;k--)
	  	   	  cout<<" ";
	  	   	 for(int j=1;j<=i;j++)
	  	   	  {
	  	   	  	cout<<coef<<" ";
	  	   	  	coef=coef*(i-j)/j;
				   }
				   cout<<endl;
			 }
	  }
	  
	  
	  //floyed triangle 
	int floyedTriangle()
	 {
	 	
	  	 int n;
	  	 cin>>n;
	  	 
	  	 for(int i=1;i<=n;i++)
	  	   { 
	  	     int coef=1;
	  	    
	  	   	 for(int k=(n+i);k>0;k--)
	  	   	  cout<<" ";
	  	   	 for(int j=n;j>=i;j--)
	  	   	  {
	  	   	  	cout<<coef<<" ";
	  	   	  	coef=coef*(j-i)/i;
				   }
				   cout<<endl;
			 }
	  }
	  
	  
	 

int main()
{   
    cout<<"Give your name"<<endl;
    string name ;
    getline(cin,name);
    cout<<"\n\n"<<name<<" welcome to pattern rendering house.\n please select the number to render the pattern"<<endl;
    
   /* half_pyramid_left();
    half_pyramid_right();
    upside_down_pyramid();
    full_pyramid();
    ud_full_pyramid();
    RS_full_pyramid();
    LS_full_pyramid();
    rombas();
    parallelogram();
    circle();
    donut();*/
    pascaleTriangle();
    floyedTriangle();
}