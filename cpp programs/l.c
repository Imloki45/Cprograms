#include<stdio.h>
main() {
	int a=1,b=1,c=1,sum;
	for(a=1;a<1000;a++) {
		for(b=a+1;b<1000;b++) {
			sum=(a*a)+(b*b);
				for(c=b+1;c<1000;c++){
					if(sum==(c*c)) {
					if((a+b+c)==1000){
					printf("%d%d%d\n",a,b,c);
					printf("%d",a*b*c); }
				}
		}
	}
}
}
