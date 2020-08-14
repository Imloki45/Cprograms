#include<iostream>
#include<vector>
using namespace std;
main()
{
	vector<char> v,v2;
	for(int i=0;i<10;i++)
	v.push_back(i+'a');
	for(int i=0;i<10;i++)
	cout<<v[i]<<endl;
	for(int i=0;i<10;i++)
	{
		v2.push_back(v[i]);
		cout<<v2[i]<<"\t";
	}
	v2.clear();
	cout<<v2.size();
	vector<char> v1(v2);
	cout<<v1.size()<<endl;
}
