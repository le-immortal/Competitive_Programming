#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int*b){
	int t = *a;
	*a = *b;
	*b = t;
}
int partition(int arr[], int l, int r){
	int key = arr[r];
	int i = l-1;

	for(int j = l; j < r; j++){
		if(arr[j] < key){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[r]);
	return (i+1);
}

void quickSort(int arr[], int l, int r){
	if(l<r){
		int pi = partition(arr, l, r);

		quickSort(arr, l, pi-1);
		quickSort(arr, pi+1, r);
	}
}


int main(){
	int arr[] = {10, 20, 80, 90, 30, 50};
	int n = sizeof(arr)/sizeof(arr[0]);

	quickSort(arr, 0, n-1);

	for(int i =0; i< n; i++)
		cout << arr[i];
}