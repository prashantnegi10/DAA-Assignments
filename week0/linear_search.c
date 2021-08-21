#include<stdio.h>
int main()
{
    int n,x,j=0,k=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            j++;
            break;
        }
        else
        {
            k++;
        }
    }
    if(j==1)
    {
        printf("present");
    }
    else
    {
        printf("not present");
    }
    printf("\nNo of comparisons=%d",k);
    return 0;
}