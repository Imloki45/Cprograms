#include<stdio.h>
#include<math.h>
main(){
	int i,x,j;
	scanf("%d",&x);
	j=sqrt(x)+1;
	for(i=2;i<j;i++){
		if(x%i==0){
		printf("not prime",i);
		return;
		}}
	printf("prime");
}
