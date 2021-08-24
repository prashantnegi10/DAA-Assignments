#include<stdio.h>
int main()
{
    int n,x,m,j1=0,k=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        int a[x];
        for(int j=0;j<x;j++)
        {
            scanf("%d",&a[j]);
        }
        scanf("%d",&m);
        for(int j=0;j<x;j++)
        {
            if(a[j]==m)
            {
                j1++;
                break;
            }
            else
            {
                k++;
            }
        }
        if(j1==1)
        {
        printf("Present ");
        printf("%d",k);
        }
        else{
            printf("Not present %d",x);
        }
        
    }
    return 0;
}