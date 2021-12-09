Given an array of non-negative integers, design an algorithm and a program to count the number of pairs of integers such that their difference is equal to a given key, K.

#include<stdio.h>
#include<stdlib.h>

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int count = 0,n,key;
		scanf("%d %d",&n,&key);
		int arr[n];
		for(int i = 0;i < n;i++)
			scanf("%d",&arr[i]);
		for(int i = 0;i < n;i++){
			for(int j = i+1;j < n;j++){
				if(abs(arr[i] - arr[j]) == key)
					count++;
			}
		}
		printf("%d",count);
	}
	return 0;
}

 
