#include<iostream>
using namespace std;
main(){
	int x=35;
	int *k,*l;
	k=l=&x;
	cout<<&x<<endl;
	cout<<*k++<<endl;
	cout<<*l<<endl;
	cout<<k<<endl;
	cout<<l<<endl;
	cout<<&x<<endl;
}
