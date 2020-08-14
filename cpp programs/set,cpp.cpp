#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
main()
{
    vector<int> v(10);
	for(int i=0;i<10;i++)
	{
	 cin>>v[i];
	}
	set<int> s(v.begin(),v.end());
	v.resize(s.size());
	v.assign(s.begin(),s.end());
	reverse(v.begin(),v.end());
	v.pop_back();
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++)
	cout<<v[i]<<"  ";
}
