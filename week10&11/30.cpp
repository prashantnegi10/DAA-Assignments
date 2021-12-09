Given an unsorted array of elements, design an algorithm and implement it using a program to find whether majority element exists or not. Also find median of the array. A majority element is an element that appears more than n/2 times, where n is the size of array

#include <bits/stdc++.h>
using namespace std;
void findMajority(int arr[], int n)
{
    int maxCount = 0;
    int index = -1; 
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }   }
    if (maxCount > n / 2)
        cout << "Yes" ;
    else
        cout << "No" ;
}
double findMedian(int a[], int n)
{    sort(a, a + n);
    if (n % 2 != 0)
        return (double)a[n / 2];
   return (double)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}
int main()
{int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    findMajority(arr,n);
    cout<<endl<<findMedian(arr, n);
    return 0;
}



