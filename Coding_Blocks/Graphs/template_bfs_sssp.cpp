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
	void ssp(T src){
		map<T,int> dist;
		queue <T> q;

		for(auto node_pair: l){
			T node = node_pair.first;
			dist[node] = INT_MAX;
		}
		for(auto i: dist){
			cout << i.first << " " << i.second ;
		}
		cout << endl;
				q.push(src);

				dist[src] = 0;

		while(!q.empty()){
			T node = q.front();
			q.pop();
			// cout << node << " ";
			cout << node <<" "<< dist[node]<< ",";
			for(int nbr:l[node]){
				if(dist[nbr] == INT_MAX){
					q.push(nbr);
					dist[nbr] = dist[node] + 1;
				}
			}
		}
	}

	
};
 
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Graph<int> g;
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(0,3);
	g.addEdge(2,3);
	g.addEdge(3,4);
	g.addEdge(4,5);

	g.bfs(0);
	cout << endl;
	g.ssp(0);
	cout << endl;
	g.printGraph();
	return 0;
}  