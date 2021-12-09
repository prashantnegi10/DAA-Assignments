Given an unsorted array of positive integers, design an algorithm and implement it using a program to find whether there are any duplicate elements in the array or not. (use sorting) (Time Complexity = O(n log n))

#include<stdio.h>

void merge(int arr[],int left,int mid,int right){
	int n1 = mid - left + 1, n2 = right - mid;
	int leftArr[n1],rightArr[n2];
	for(int i = 0;i < n1;i++)
		leftArr[i] = arr[left + i];
	for(int i = 0;i < n2;i++)
		rightArr[i] = arr[mid+i+1];
	
	int i = 0,j = 0,k = left;
	while(i < n1 && j < n2){
		if(leftArr[i] <= rightArr[j])
			arr[k++] = leftArr[i++];
		else
			arr[k++] = rightArr[j++];
	}
	while(i < n1)
		arr[k++] = leftArr[i++];
	while(j < n2)
		arr[k++] = rightArr[j++];
}

void mergeSort(int arr[],int left,int right){
	
	if(left >= right)
		return;
	
	int mid = left + (right - left)/2;
	mergeSort(arr,left,mid);
	mergeSort(arr,mid+1,right);
	merge(arr,left,mid,right);
}
int main(void){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,f = 0;
		scanf("%d",&n);
		int arr[n];
		for(int i = 0;i < n;i++)
			scanf("%d",&arr[i]);
		mergeSort(arr,0,n-1);
		for(int i = 0;i < n-1;i++){
			int j = i+1;
			if(arr[i] == arr[j]){
				f = 1;
				break;
			}
		}
		if(flag == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}

 
