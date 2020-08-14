#include<stdio.h>
int cost[20],c[20][20],p[20],d[20];
int minimum(int n,int j)
{
        int min=999,i,l;
        for(i=1;i<=n;i++)
        {
                if(c[i][j]!=0&&c[i][j]+cost[j]<min)
                {
                        min=c[i][j]+cost[j];
                        l=i;
                }
        }
        return l;
}
void bgraph(int n,int k)
{
        int l,j,i;
        cost[1]=0;
        for(j=2;j<=n;j++)
        {
           l=minimum(n,j);
           cost[j]=c[l][j]+cost[j];
           d[j]=l;
        }
        p[1]=n;
        p[k]=1;
        for(i=2;i<=k-1;i++)
        {
                p[i]=d[p[i-1]];
        }
}
main()
{
        int n,i,j,k;
        printf("enter no.of vertices\n");
        scanf("%d",&n);
        printf("enter no.of stages\n");
        scanf("%d",&k);
        printf("enter");
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n;j++)
                {
                        printf("%d,%d =",i,j);
                        scanf("%d",&c[i][j]);
                }
}
        bgraph(n,k);
        printf("path is\n");
        for(i=1;i<=k;i++)
        {
                printf("%d  ",p[i]);
        }
}


