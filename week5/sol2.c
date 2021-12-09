Given an unsorted array of integers, design an algorithm and implement it using a program to find whether two elements exist such that their sum is equal to the given key element. (Time Complexity = O(n log n)).

#include<stdio.h>
#include<stdlib.h>

int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int flag = 0,n,key;
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i < n;i++)
			scanf("%d",&arr[i]);
		scanf("%d",&key);
		for(int i = 0;i < n;i++){
			for(int j = i+1;j < n;j++){
				if(arr[i] + arr[j] == key){
					f = 1;
					printf("%d %d\n",arr[i],arr[j]);
				}
			}
		}
		if(f == 0)
			printf("No such elements exist\n");
	}
}

 
