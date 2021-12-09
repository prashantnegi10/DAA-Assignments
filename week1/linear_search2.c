Given an already sorted array of positive integers, design an algorithm and implement it using a program to find whether given key element is present in the array or not. Also, find total number of comparisons for each input case. (Time Complexity = O(nlogn), where n is the size of input).


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
		scanf("%d",&key);
		int count = 0,flag = 0;
		int low = 0,high = n-1,mid = (low + high)/2;
		while(low <= high)
		{
			if(key == A[mid])
			{
				count++;
				flag = 1;
				break;
			}
			else if(key < A[mid])
			{
				high = mid - 1;
				mid = (low + high)/2;
				count++;
			}
			else if(key > A[mid])
			{
				low = mid + 1;
				mid = (low + high)/2;
				count++;
			}
		}
		if(flag == 1)
			printf("Present %d\n",count);
		else
			printf("Not Present %d\n",count);
	}
}

 
