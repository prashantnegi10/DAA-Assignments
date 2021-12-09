
Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case.

#include<stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int A[n];
		for(int i = 0;i < n;i++)
			scanf("%d",&A[i]);
		int key;
		scanf("%d",key);
		int count = 0,flag = 0;
		for(int i = 0;i < n;i++)
		{
			if(key == A[i])
			{
				count++;
				flag = 1;
				break;
			}
			count++;
		}
		if(flag == 1)
			printf("Present\n");
		else
			printf("Not Present\n");
	}
}
 
