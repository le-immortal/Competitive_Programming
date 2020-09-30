#include <bits/stdc++.h>
using namespace std;

int knapSackrec(int W, int n, int val[], int wt[]){
	if(n == 0 || W == 0)
		return 0;
	if(wt[n-1] > W)
		return knapSackrec(W, n-1, val, wt);
	else
		return max(val[n-1]+knapSackrec(W-wt[n-1],n-1,val, wt),knapSackrec(W, n-1, val, wt));
}

int max(int a, int b) 
{ 
    return (a > b) ? a : b; 
} 
// int knapSack(int W, int n, int val[], int wt[]){
// 	int K[n+1][W+1];
// 	int w = 0;
// 	for(int i = 0; i <=n; i++){
// 		for(; w <=W; w++){
// 			if(i == 0 || w == 0)
// 				K[i][w] = 0;
// 			else if(wt[i-1] <= w)
// 				K[i][w] = max(
// 					val[i-1]+K[i-1][w-wt[i-1]], 
// 					K[i-1][w]);
// 			else
// 				K[i][w] = K[i-1][w];
// 		}
// 	}

// 	return K[n][W];
// }

int knapSack(int W, int n, int val[], int wt[]) 
{ 
    int i, w; 
    int K[n + 1][W + 1]; 
  
    // Build table K[][] in bottom up manner 
    for (i = 0; i <= n; i++) { 
        for (w = 0; w <= W; w++) { 
            if (i == 0 || w == 0) 
                K[i][w] = 0; 
            else if (wt[i - 1] <= w) 
                K[i][w] = max( 
                    val[i - 1] + K[i - 1][w - wt[i - 1]], 
                    K[i - 1][w]); 
            else
                K[i][w] = K[i - 1][w]; 
        } 
    } 
  
    return K[n][W]; 
} 

int main(){
	int val[] = { 1000, 11100, 120};
	int wt[] = { 20, 50, 30};
	int W = 50;
	int n = sizeof(val)/sizeof(val[0]);
	cout << knapSackrec(W, n, val, wt) <<endl;
	cout << knapSack(W, n, val, wt);
}