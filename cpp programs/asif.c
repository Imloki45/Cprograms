#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void push(char);
char pop();
int priority(char);

char stack[100];
int top=-1;

main()
{
	char infix[100],postfix[100],x,q;
	int i=0,j=0,len;
	printf("enter string");
	gets(infix);
	
	len=strlen(infix);
	for(i=0;i<len;i++)
	{
		x=infix[i];
		if(x=='(')
		{
			push(x);
		}
		else if(x==')')
		{
			do
			{
				postfix[j]=pop();
				j++;
				//x++;
			}while(x!='(');
			q=pop();
		}
		else if(top==-1)
		{
			push(x);
			
		}
		
		else if(isalpha(x))
		{
			postfix[j]=x;
			j++;
		}
		else
		{
			if(priority(top)>=priority(x))
			{
				postfix[j]=pop();
				j++;
			}
			push(x);
		}
	//	x++;
	}
	
	while(stack[top]!=-1)
	{
		postfix[j]=pop();
		j++;
	}
	postfix[j]='\0';
	len=strlen(postfix);
	
	
	
	for(i=0;i<len;i++)
	{
		printf("%c",postfix[i]);
	}

}

void push(char c)
{
	stack[++top]=c;
}

char pop()
{
	return stack[top--];
}

int priority(char c)
{
	if(c=='(')
		return 0;
	else if(c=='+')
		return 1;
	else if(c=='-')
		return 1;
	else if(c=='*')
		return 2;
	else if(c=='/')
		return 2;
	else if(c=='|')
		return 3;
	else
		return 4;		
}
