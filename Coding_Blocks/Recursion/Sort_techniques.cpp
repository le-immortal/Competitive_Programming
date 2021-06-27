#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define pb push_back
#define popb pop_back
#define MOD 1000000007


void bubbleSort(int a[], int j, int n){
	//base case
	if(n == 1)
		return;
	//rec case
	if(j == n-1)
		//for the number of passes
		return bubbleSort(a, 0, n-1);
	// to sort elements in a particular pass
	if(a[j]> a[j+1])
		swap(a[j], a[j+1]);
	bubbleSort(a, j+1, n);
	return;
}


void merge(int *a ,int r, int mid, int l){
	int i = r;
	int j = mid+1;
	int k = r;
	int temp[100];
	while((i<=mid) && (j <=l)){
		if(a[i] < a[j]){
			temp[k++] = a[i++];
		}
		else
			temp[k++] = a[j++];
	}
	while(i<=mid)
		temp[k++] = a[i++];
	while(j <= l)
		temp[k++] = a[j++];
	fo(i,r,l+1)
		a[i] = temp[i];

}

void mergeSort(int *a, int r, int l){
	//base case 
	if(r>=l)
		return;
	// Divide the array in two parts
	int mid = (r+l)/2;
	//Sort Recursively
	mergeSort(a, r, mid);
	mergeSort(a, mid+1, l);
	//merge
	merge(a, r, mid, l);

}

int partition(int *a, int s, int e){
	int i = s-1;
	// int j = s;
	fo(j,s,e){
		if(a[j] <= a[e]){
			i++;
			swap(a[i], a[j]);
		}
		// j++;

	}
	swap(a[i+1], a[e]);
	return i+1;
}


void quickSort(int *arr, int s, int e){
	//base case
	if(s>=e)
		return;
	//recursive case
	int p = partition(arr, s, e);
	// fo(i,0,p)
		// cout << arr[i] << " ";
	quickSort(arr, s, p-1);
	quickSort(arr, p+1, e);

}

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {5,3,2,1,4};
	int n = sizeof(arr)/ sizeof(int);
	bubbleSort(arr, 0, n);

	fo(i,0,5)
		cout << arr[i] << " ";
	cout << endl;

	int a[] = {6,2,53,7,34,3,4, 8};
	n = sizeof(a)/ sizeof(int);
	mergeSort(a, 0, n-1);

	fo(i,0,n)
	 cout << a[i] << " ";

	int aq[] = {6,2,53,7,34,3,4, 8};
	n = sizeof(aq)/ sizeof(int);
	cout << endl;
	quickSort(aq, 0, n-1);
	fo(i,0,n)
	 cout << aq	[i] << " ";

	return 0;


}	