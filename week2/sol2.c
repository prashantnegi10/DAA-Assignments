Given a sorted array of positive integers, design an algorithm and implement it using a program to find three indices i, j, k such that arr[i] + arr[j] = 
arr[k].

#include<stdio.h>
void func(int a[],int n)
{
    int i,j=n-1,s=0,k,f=0;
    while(j>=0)
    {
        for(i=0;i<j;i++)
        {
            s=a[i]+a[j];
            for(k=j;k<n;k++)
            {
                if(s==a[k])
                {
                    printf("%d, %d, %d\n",i+1,j+1,k+1);
                    f=1;
                    break;
                }
            }
        }
        j--;
    }
    if(f!=1)
        printf("not sequence found");
}
int main()
{
    int i,j,n,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        func(a,n);
    }
}
 
