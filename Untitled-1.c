#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,s=0,r,a;
    scanf("%d", &n);
    a=n;
    //Complete the code to calculate the sum of the five digits on n.
    while(a>0){
        r=a%10;
        s=s+r;
        a=a/10;
    }
    printf("%d",s);
    return 0;
}


