#include<stdio.h>
main()
{
	int ch;
	do{

	printf("enter your choice\n");
scanf("%d",&ch);
		//printf("hello world\n");
		switch(ch)
		{
			case 1:printf("1");
			break;
			case 2:printf("2");
			break;
		}
	}while(ch>0&&ch<3);
}
