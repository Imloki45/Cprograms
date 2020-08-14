#include<stdio.h>
int lo[10],m,p;
void s(int l,int r){
	int t=lo[l];
	lo[l]=lo[r];
	lo[r]=t;
}
int part(int l,int r){
	p=lo[r];
	while(1){
		while(lo[l]>p)
			l++; 
		//printf("%d %d")
		while(lo[r]<=p)
			r--;
		if(l<r)
			s(l,r);
		else
			return r;		
	}
}
void qs(int l,int r){
	if(l<r){
		m=part(l,r);
		printf("%d",m);
		qs(l,m-1);
		qs(m+1,r);
	}	
}
main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&lo[i]);
	qs(0,n-1);
	for(i=0;i<n;i++)
		printf("%d",lo[i]);
	
}

