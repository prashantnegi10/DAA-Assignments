Given a sorted array of positive integers containing few duplicate elements, design an algorithm and implement it using a program to find whether the given key element is present in the array or not. If present, then also find the number of copies of given key. (Time Complexity = O(log n))

#include<stdio.h>

int binarySearch(int arr[],int n,int key){
	int s = 0,end = n-1;
	while(s <= end){
		int mid = s + (end - s)/2;
		if(arr[mid] == key)
			return mid;
		else if(arr[mid] > key)
			end = mid - 1;
		else
			s = mid + 1;
	}
	return -1;
}
int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i < n;i++)
			scanf("%d",&arr[i]);
		int key;
		scanf("%d",&key);
		int index = binarySearch(arr,n,key);
		int count = 0;
		if(index == -1)
			printf("Key Not present\n");
		else{
			for(int i = 0;i < n;i++){
				if(arr[i] == key)
					count++;
			}
			printf("%d - %d\n",arr[index],count);
		}
	}
}

