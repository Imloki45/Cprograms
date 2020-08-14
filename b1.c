#include<stdio.h>
main(){
	int n,i,c=1,b[101];
	float a=0;
	for(i=0;;i++){
		scanf("%d",&b[i]);
		a+=b[i];
		if(b[i]!=-1){
			if(i==0)printf("%.2f ",a);
			else
				printf("%.2f ",(a)/(++c));
		}
		else{
			printf("\n");
			break;
		}
	}	
}
