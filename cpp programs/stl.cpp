#include<iostream>
#include<vector>
using namespace std;
main()
{
	#vector
	vector<int> v;
	cout<<v.size()<<endl;
	vector<int> v1(5);
	cout<<v1[2]<<endl;
	vector<int> v2(6,5);
	cout<<v2[1]<<endl;
	for(int i=0;i<7;i++)
	v.push_back(i);
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<endl;
	vector<int>::iterator p;
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p<<endl;
		p++;
	}
	p=v.begin();
	p=p+1;
	v.insert(p,10,11);
	p=v.begin();
	while(p!=v.end())
	{
		cout<<*p<<"\t";
		p++;
	}
	p=v.begin();
	p=p+1;
	v.erase(p,p+10);
		p=v.begin();
	while(p!=v.end())
	{
		cout<<*p<<"\t";
		p++;
	}
	p=v.begin();
	v.insert(p,v2.begin(),v2.end());
		p=v.begin();
	while(p!=v.end())
	{
		cout<<*p<<"\t";
		p++;
	}
}
