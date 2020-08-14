#include<stdio.h>
#include<stdlib.h>

struct node
{
	int coeff;
	struct node *next;
}*temp,*he;

struct node* getnode();
struct node* create(struct node *,int);
void display(struct node *,int);
void add(struct node *,struct node *,int,int);
void sub(struct node *,struct node *,int,int);
void mul(struct node *,struct node *,int,int);
main()
{
	struct node *p=NULL,*q=NULL;
	int m,n;
	printf("enter the highest degree of polynomial 1 and 2 : ");
	scanf("%d%d",&m,&n);
	p=create(p,m);
	q=create(q,n);
//	printf("display of 1st polynomial \n");
	display(p,m);
//	printf("display of 2nd polynomial \n");
	display(q,n);
	
	add(p,q,m,n);
	sub(p,q,m,n);
	mul(p,q,m,n);
}

struct node* getnode()
{
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	return n;
}

struct node* create(struct node *p,int m)
{
	int i;
	for(i=m;i>=0;i--)
	{
		struct node *newnode;
		newnode=getnode();
		if(p==NULL)
		{
			printf("enter coeff of x^%d : ",i);
			scanf("%d",&newnode->coeff);
			p=newnode;
			newnode->next=NULL;
			temp=newnode;
		}
		else
		{
			printf("enter coeff of x^%d : ",i);
			scanf("%d",&newnode->coeff);
			temp->next=newnode;
			newnode->next=NULL;
			temp=newnode;
		}
	}
	return p;
}

void display(struct node *h,int m)
{
	struct node *hd=h;
	while(hd!=NULL)
	{
		printf("%d %d	",hd->coeff,m);
		hd=hd->next;
		m--;
	}
	printf("\n\n");
}

void add(struct node *p,struct node *q,int m,int n)
{
	while(p!=NULL&&q!=NULL)
	{
		if(m>n)
		{
			printf("%d %d	",p->coeff,m);
			m--;
			p=p->next;
		}
		else if(m<n)
		{
			printf("%d %d	",q->coeff,n);
			n--;
			q=q->next;
		}	
		else if(m==n)
		{
			printf("%d %d	",q->coeff+p->coeff,n);
			n--;
			m--;
			q=q->next;
			p=p->next;
		}
	}
	
	while(p==NULL&&q!=NULL)
	{
		printf("%d %d	",q->coeff,n);
		n--;
		q=q->next;
	}	
	while(p!=NULL&&q==NULL)
	{
		printf("%d %d	",p->coeff,m);
		m--;
		p=p->next;
	}
		printf("\n");	
}


void sub(struct node *p,struct node *q,int m,int n)
{
	while(p!=NULL&&q!=NULL)
	{
		if(m>n)
		{
			printf("%d %d	",p->coeff,m);
			m--;
			p=p->next;
		}
		else if(m<n)
		{
			printf("-%d %d	",q->coeff,n);
			n--;
			q=q->next;
		}	
		else if(m==n)
		{
			printf("%d %d	",p->coeff-q->coeff,n);
			n--;
			m--;
			q=q->next;
			p=p->next;
		}
	}
	
	while(p==NULL&&q!=NULL)
	{
		printf("%d %d	",-q->coeff,n);
		n--;
		q=q->next;
	}	
	while(p!=NULL&&q==NULL)
	{
		printf("%d %d	",p->coeff,m);
		m--;
		p=p->next;
	}	
	printf("\n");
}

void mul(struct node *p,struct node *q,int m,int n)
{
	struct node *r=NULL,*s,*r1,*r2;
	int i,j,k;
	for(i=1;i<=(m+n+1);i++)
	{
		struct node *newnode=getnode();
		
		if(r==NULL)
		{
			r=newnode;
			r->coeff=0;
			r->next=NULL;	
			he=newnode;
		//	t=newnode;
		}
		else
		{
			he->next=newnode;
			newnode->coeff=0;
			newnode->next=NULL;
			he->next=newnode;	
			he=newnode;
		}
	}
	
//	display(r,(m+n));//here m+n+1 will not pass because power is incresing one more so i decresed.....
	
	for(i=0;i<=m;i++)
	{
		r1=r;
		for(k=0;k<i;k++) //for leaving ist node in my logic of multiplication
		{
			r1=r1->next;
		}
		s=q;
		for(j=0;j<=n;j++)
		{
			r1->coeff=r1->coeff+(p->coeff * s->coeff);
			//p=p->next;
            s=s->next;
            r1=r1->next;
		}
		p=p->next;
	}
	
	display(r,(m+n));
}
