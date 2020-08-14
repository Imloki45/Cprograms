#include<stdio.h>
int n,a[10][10],v[10],i,j;
void dfs(int u){
	if(v[u]!=1){
		printf("%d",u);
		v[u]=1;
		for(i=0;i<n;i++)
		if(a[u][i]==1 && v[i]!=1)
		dfs(i);
	}
}
main(){
	scanf("%d",&n);
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	dfs(3);
	
}
