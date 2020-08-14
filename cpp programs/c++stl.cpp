#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> A = {11,2,3,14};
	cout<<A[1]<<endl;
	sort(A.begin(),A.end);
	bool present=binary_search(A.begin(),A.end,3);
	bool present1=binary_search(A.begin(),A.end(),4);
	
	A.push_back(100);
	present=binary_search(A.begin(),A.end(),100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(123);
	vector<int>::iterator iter=lower_bound(A.begin(),A.end(),100);
	vector<int>::iterator iter2=upperbound(A.begin(),A.end(),100);
	cout<<*iter<<'  '<<*iter2<<endl;
	cout<<it2-it1<<endl; 
	return 0;
	
}
