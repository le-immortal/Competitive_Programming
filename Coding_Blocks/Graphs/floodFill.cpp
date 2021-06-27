 #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
int R,C;
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

void floodFill(char mat[][50], int i, int j, char ch, char color){
	//Base case
	if(i<0 || j<0 || i>=R || j >=C)
		return;


	//Boundary condition
	if(mat[i][j]!=ch)
		return;

	//Recursive call
	mat[i][j] = color;
	fo(k,0,4){
		floodFill(mat, i+dx[k], j+ dy[k], ch, color);
	}
}
 
void printMat(char mat[][50], int R, int C){
	fo(i,0,R)
	{
		fo(j,0,C){
			cout << mat[i][j];
		}
		cout <<endl;
	}
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cin >> R >> C;
	char input[15][50];
	fo(i,0,R){
		fo(j,0,C){
			cin >> input[i][j];
		}
	}
	printMat(input, R, C);

	floodFill(input, 0,0,'.','r');

	printMat(input, R, C);
		return 0;
}  