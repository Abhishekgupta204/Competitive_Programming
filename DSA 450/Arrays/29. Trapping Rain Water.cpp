#include<bits/stdc++.h>
using namespace std;

int maxWater(int arr[], int n)
{

	int res = 0;
	
	for (int i = 1; i < n-1; i++) {
		
		
		int left = arr[i];
		for (int j=0; j<i; j++)
		left = max(left, arr[j]);
		
		int right = arr[i];
		for (int j=i+1; j<n; j++)
		right = max(right, arr[j]);

	res = res + (min(left, right) - arr[i]);
	}

	return res;
}


int main()
{
	int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	cout << maxWater(arr, n);
	
	return 0;
}
