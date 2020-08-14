#include<iostream>
#include<cmath>
using namespace std;
typedef unsigned long long int b;
main()
{
	b i,sum=0;
	for(i=1;i<=1000;i++)
	sum+=(b(pow(i,i))%10000000000);
	cout<<sum<<endl;
}
