#include<stdio.h>
int l=2,n;
void c(int i,int j){
	int a[10],k;
	for(k=0;l<10;k++){
		if(k==0){
		a[0]=i;a[1]=j;}
		else{
			a[l]=(a[l-1]+a[l-2]);
			l+=1;	
		}
	}
	if(a[9]==n)
		printf("%d %d",i,j);
	else
		printf("-1 -1");
	
}
main(){
	int i,j;
	scanf("%d",&n);
	c(1,1);
}
