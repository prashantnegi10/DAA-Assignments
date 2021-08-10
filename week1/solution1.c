#include<stdio.h>
int main()
{
    int n,x,m,j1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        int a[x];
        for(int j=0;j<x;j++)
        {
            scanf("%d",&x[j]);
        }
        scanf("%d",&m)
        for(int j=0;j<x;j++)
        {
            if(x[j]!=m)
            {
                j1++;
            }
        }
        printf("%d",j1);
    }
    return 0;
}