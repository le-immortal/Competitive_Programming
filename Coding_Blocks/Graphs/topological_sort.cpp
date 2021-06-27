 #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
class Graph
{
	list<int> *l;
	int V;
public:
	Graph(int V){
		this->V = V;
		l = new list<int>[V];
	}
	void addEdge(int x, int y){
		l[x].push_back(y);
	}

	void topological_sort(){
		int *indegree = new int[V];
		for(int i=0; i <V; i++){
			indegree[i] = 0;
		}
		fo(i,0,V){
			for(auto u: l[i]){
				indegree[u]++;
			}
		}
		queue <int> q;
		fo(i,0,V){
			if(indegree[i]==0){
				q.push(i);
			}
		}
		while(!q.empty()){
			int node = q.front();
			cout << node << " ";
			q.pop();
			for(auto nbr:l[node]){
				indegree[nbr]--;
				if(indegree[nbr] == 0){
					q.push(nbr);
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
	Graph g(6);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(1,4);
	g.addEdge(2,3);
	g.addEdge(2,5);
	g.addEdge(4,5);
	g.addEdge(3,5);	
	// g.addEdge(1,4); 

	
	g.topological_sort();
	return 0;
}  