#include <stdio.h>
int ar[10],i,a,b,c,n,m;
int f(){
    ar[0]=1;ar[1]=1;
    for(i=2;i<n;i++){
        ar[i]=((a*ar[i-1])+(b*ar[i-2])+c);
    }
    return ar[n-1]%m;
}
int main() {
	int t,j;
	scanf("%d",&t);
	for(j=0;j<t;j++){
	    scanf("%d %d %d %d %d",&a,&b,&c,&n,&m);
	    printf("%d\n",f());
	}
	return 0;
}
