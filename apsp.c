#include<stdio.h>
#define max 999
int min(int a,int b)
{
        if(a>b)
                return b;
        else
                return a;
}
main()
{
        int v,i,j,cost[max][max],a[max][max],k=1;
        printf("enter no of vertices\n");
        scanf("%d",&v);
        printf("enter the adjecny matrix\n");
        printf("if there is no edge in the graph(i.e infinty) enter max i.e is 999\n");
        for(i=1;i<=v;i++)
        {
                for(j=1;j<=v;j++)
                {
                        scanf("%d",&cost[i][j]);
                } 
        }
        while(k!=v+1)
        {
                for(i=1;i<=v;i++)
                {
                        for(j=1;j<=v;j++)
                        {
                                if(i!=j)
                                {
                                        cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
                                }
                        }
                }
                k=k+1;
        }
        for(i=1;i<=v;i++)
        {
                for(j=1;j<=v;j++)
                {

                        printf("%d\t",cost[i][j]);
               }
                printf("\n");
        }
}
