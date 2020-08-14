#include<stdio.h>
#include<math.h>
int c=0;
void ispal(int n)
{
	int i,j,k,sum=0,count=0;
	i=n;
	while(i!=0){
		count++;
		i=i/10;
	}
	j=n;
	while(n!=0){
		i=n%10;
		sum+=i*pow(10,--count);
		n=n/10;
	}
	if(sum==j)
	printf("%d %d",c,sum);
	else{
		c++;
		ispal(sum+j);
	}
}
main()
{
	int n;
	printf("enter n value\n");
	scanf("%d",&n);
	ispal(n);
}
