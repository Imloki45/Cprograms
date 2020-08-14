#include<iostream>
#include<cmath>

using namespace std;
typedef unsigned long long int b;
main()
{
	 b a,i,j;
	 for(i=100000000;i<=1000000000;i+=20)
	 {
	 
	 	for(j=2;j<=20;j++)
	 	{
	 		if(i%j!=0)
	 		{
	 		
	 			break;
			 }
	 		
		 } 
		 if(j==21)
		 {
		 cout<<i<<endl;}
	}
		 
	 
	
}
