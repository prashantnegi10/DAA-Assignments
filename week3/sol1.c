Given an unsorted array of integers, design an algorithm and a program to sort the array using insertion sort. Your program should be able to find number of comparisons and shifts ( shifts - total number of times the array elements are shifted from their place) required for sorting the array.

#include<stdio.h>

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,shift = 0,comp = 0;
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i < n;i++)
			scanf("%d",&arr[i]);
			
		int v,j;
		for(int i = 1;i < n;i++){
			v = arr[i];
			j = i;
			while(arr[j-1] > v && j >= 1){
				shift++;
				comp++;
				arr[j] = arr[j-1];
				j--;
			}
			shift++;
			arr[j] = v;
		}
		
		for(int i = 0;i < n;i++)
			printf("%d ",arr[i]);
		printf("\n");
		printf("comparisions = %d",comp);
		printf("shifts = %d",shift);
	}
	return 0;
}

 
