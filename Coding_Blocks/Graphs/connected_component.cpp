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
		l[y].push_back(x);	
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
	void dfs_helper(T src, map<T, bool> &visited){
		 cout << src << " ";
		 visited[src] = true; 
		 for(T nbr: l[src]){
		 	if(!visited[nbr]){
		 		dfs_helper(nbr, visited); 
		 	}
		 }
	}
	void dfs(){
		map<T, bool> visited;

		for(auto p: l){
			T node = p.first;
		 	visited[node] = false;
		}
		// dfs_helper(src, visited);
					int cnt = 0;

		for(auto p:l){
			T node = p.first;
			if(!visited[node]){
				cout << "Component "<<cnt << " -->";
				dfs_helper(node, visited);
				cnt++;
			}
		}
	}
	
};
 
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Graph <int> g;
	g.addEdge(0,1);
	g.addEdge(2,1);
	g.addEdge(2,3);
	g.addEdge(0,3);
	g.addEdge(0,4);
	g.addEdge(5,6);
	g.addEdge(6,7);
	g.addEdge(8,8);
	
	g.dfs();
	return 0;
}  