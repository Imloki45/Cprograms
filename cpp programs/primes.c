#include<stdio.h>
#include<math.h>
int a[10000];
int isprime(int n){
	int i=2;
	for(;i<=(int)sqrt(n)+1;i++)
	{
		if(n%i==0)
		return 0;
	}
	return n;
}
main()
{
	int n,j,k=2,k1=0,i;
	scanf("%d",&n);
	int cnt=0;
	for(j=14;j<=15;j++){
		for(k=2;k<(int)sqrt(j)+1;k++)
		{
			if(j%k==0)
			{
				if(isprime(k))
					cnt++;
				if(isprime(j/k))
				cnt++;
				if(cnt==n)
				{
					printf("%d",j);
				a[k1]=j;
				break;
			}
			
							
			}
		if (cnt!=0 && cnt!=n)
		cnt=0;
		}
	
	}
	
}
