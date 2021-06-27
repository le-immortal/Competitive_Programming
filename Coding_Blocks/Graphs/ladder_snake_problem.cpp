#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)

template<typename T>
class Graph
{
	map<T, list<T>>l;
public:
	void addEdge(int x, int y){
		l[x].push_back(y);

	}
	void bfs(T src){
		map<T,int> visited;
		queue <T> q;

		q.push(src);
		visited[src] = true;
		while(!q.empty()){
			T node = q.front();
			q.pop();
			cout << node << " ";
			for(int nbr:l[node]){
				if(!visited[nbr]){
					q.push(nbr);
					visited[nbr] = true;
				}
			}
		}
	}

	void printGraph(){
		for(auto i:l){
			cout << i.first << "->" ;
			for(auto j: i.second){
				cout << j << ",";
			}
			cout << endl;
		}
	}
	int ssp(T src, T dest){
		map<T,int> dist;
		map<T, T> parent;
		queue <T> q;

		for(auto node_pair: l){
			T node = node_pair.first;
			dist[node] = INT_MAX;
		}
		// for(auto i: dist){
		// 	cout << i.first << " " << i.second ;
		// }
		cout << endl;
				q.push(src);
				parent[src] = src;
				dist[src] = 0;

		while(!q.empty()){
			T node = q.front();
			q.pop();
			// cout << node << " ";
			// cout << node <<" "<< dist[node]<< ",";
			for(int nbr:l[node]){
				if(dist[nbr] == INT_MAX){
					q.push(nbr);
					parent[nbr] = node;
					dist[nbr] = dist[node] + 1;
				}
			}
		}

		T temp = dest;
		while(temp!= src){
			cout << temp << "<-";
			temp = parent[temp];
		}
		cout << src <<endl;
		return dist[dest];
	}

	
};
 
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int board[50] = {0};

	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = 10;
	board[32] = -2;
	board[34] = -22;

	Graph<int> g;
	for(int i =0; i <=36; i++){
		  for(int dice = 1; dice<=6; dice++){
		  	int j = i + dice;
		  	j += board[j];

		  	if(j <=36){
		  		g.addEdge(i,j);
		  	}
		  }
	}
	g.addEdge(36,36);
	cout << g.ssp(0,36);
	return 0;
}  