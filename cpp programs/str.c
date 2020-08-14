#include<stdio.h>
#include<ctype.h>
main()
{
	char s[50];
	int k,i,d=0;
	printf("enter a number to maximize it\n");
	scanf("%s",s);
	printf("enter k value\n");
	scanf("%d",&k);
	for(i=0;s[i]!='\0';i++)
	{
		if(d<k)
		{
			if(s[i]-'0'<9)
			{
			s[i]='9';
			}
			d++;
		}
	}
	printf("%s",s);
}
