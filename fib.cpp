#include<iostream>
using namespace std;
long int a,b,c,n,m;
void find()
{
	long int v[2]={0},i,k;
	v[0]=1;v[1]=1;
	for(i=2;i<n;i++)
	{
		k=v[1];
		v[1]=a*v[0]+b*v[1]+c; 
		v[0]=k;
	}
	cout<<v[1]%m;
}
int main()
{
	int k;
	cin>>k;
	while(k--)
	{
		cin>>a>>b>>c>>n>>m;
	     find();	
	}	
}
