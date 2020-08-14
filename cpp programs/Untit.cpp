#include<iostream>
using namespace std;
class A{
	public:
		int a=4;
};
class B:public A{
	public:
		int a=7;
};

main()
{
	B b;
//	b.read();
	cout<<b.a;
	cout<<b.A::a;
}
