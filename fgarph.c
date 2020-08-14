#include<stdio.h>
int cost[20],c[20][20],p[20],d[20];
int minimum(int n,int j)
{
        int min=999,i,l;
        for(i=1;i<=n;i++)
        {
                if(c[j][i]!=0&&c[j][i]+cost[i]<min)
                {
                        min=c[j][i]+cost[i];
                        l=i;
                }
        }
        return l;
}
void fgraph(int n,int k)
{
        int l,j,i;
        cost[n]=0;
        for(j=n-1;j>=1;j--)
        {
           l=minimum(n,j);
           cost[j]=c[j][l]+cost[l];
           d[j]=l;
        }
        p[1]=1;
        p[k]=n;
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
        fgraph(n,k);
        printf("path is\n");
        for(i=1;i<=k;i++)
        {
                printf("%d  ",p[i]);
        }
        printf("%d",cost[1]);
}

