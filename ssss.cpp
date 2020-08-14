#include <iostream>
#include<algorithm>
using namespace std;
long long int a[59],b[36],c[25],d[2000],e[10000],l=0,k=0;
void find()
{
    long int i,j;
    a[0]=1;b[0]=1;c[0]=1;
    for(i=1;i<59;i++)
    a[i]=a[i-1]*2;
    for(i=1;i<37;i++)
    b[i]=b[i-1]*3;
    for(i=1;i<25;i++)
    c[i]=c[i-1]*5;
    for(i=0;i<59;i++)
    for(j=0;j<37;j++)
    {
        if((a[i]*b[j])<288325195312500001)
        d[k++]=a[i]*b[j];
        else
        break;
    }
    //cout<<k<<endl;
    for(i=0;i<k;i++)
    for(j=0;j<25;j++)
    {
        if((d[i]*c[j])<288325195312500001)
        e[l++]=d[i]*c[j];
        else
        break;
    }
    sort(e,e+l);
}
 int main() {
	int i,j,k,n;
	cin>>k;
    find();
    while(k--){
    	cin>>n;
     cout<<e[n-1];
 	}
}

