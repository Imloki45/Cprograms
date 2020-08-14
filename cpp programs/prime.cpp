#include<iostream>
#include<vector>
using namespace std;
typedef long long int b;
main()
{
	vector<b>v;
	b n,i,j;
	cin>>n;
	v.push_back(2);
	for(i=3;i<n+1;i+=2)
	v.push_back(i);
	vector<b>::iterator v1=v.begin();
	for(;v1!=v.end();v1++)
	cout<<*v1<<endl;
}
