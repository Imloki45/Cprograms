#include<iostream>
using namespace std;
class abc{
	int a;
	public:
		int init(int i)
		{
			a=i;
		}
		void display()
		{
			cout<<a<<endl;
		}
};
main()
{
	abc b,c;
	b.init(3);
	c.init(4);
	b.display();
	c.display();
	char d='a';
	cout<<(isalnum(d)==1);
}
