#include <iostream>

using namespace std;

int main()

{
	int array[12]={1,2,3,4,7,11,19,20,22,23,24,60};
	int k=0;
	for(int i=0;i<12;i++)
	 {
	 	if((array[i+1]-array[i])!=1)
	 	 k++;
      }
	 cout<<k-1;
}