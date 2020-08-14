#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
typedef struct node node;
node* create(){
	char ch,ch1;
	node* start=(node*)malloc(sizeof(node));
	node* start2=(node*)malloc(sizeof(node));
	start2=NULL;
	start=NULL;
	node* temp=start;
	do{
		node* newer=(node*)malloc(sizeof(node));
		newer->next=NULL;
		printf("enter data");
		scanf("%d",&newer->data);
		if(start==NULL)
		{
			start=newer;
		}
		else
		{
			start2->next=newer;
			start2=start2->next;
		}
		start2=newer;
		printf("enter a character");
		scanf("%c",&ch1);
		scanf("%c",&ch);
	}while(ch!='n');
	return start;
}
void display(node* root)
{
	node* temp=root;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
main()
{
	node* start1=create();
	display(start1);
}
