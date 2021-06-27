 #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
#define pb push_back
#define popb pop_back

class Graph
{
	vector <pair<int, int>> *l;
	int V;
public:
	Graph(int n){
		V = n;
		l = new vector<pair<int , int>>[n];
	};

	void addEdge(int x, int y, int w){
		l[x].pb({y,w});
		l[y].pb({x,w});
	} 
	
	int prim_mst(){
		//Initialize a Min Heap
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int , int>>> Q;

		//Visited array that denotes whether node has been inclueded in MST or not
		bool *visited = new bool[V]{0};
		int ans = 0;

		Q.push({0,0}); //weight node

		while(!Q.empty()){
			//pick edge with min weight
			auto best = Q.top();
			Q.pop();

			int to = best.second;
			int weight = best.first;
			if(visited[to]){
				continue;
			}else{
				ans += weight;
				visited[to] = 1;

				for(auto x: l[to]){
					if(visited[x.first] == 0)
						Q.push({x.second, x.first});
				}
			}
		}
		return ans;
	}	
};

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Graph g(4);
	g.addEdge(0, 1, 1);
	g.addEdge(1, 3, 3);
	g.addEdge(3, 2, 4);
	g.addEdge(2, 0, 2);
	g.addEdge(0, 3, 2);
	g.addEdge(1, 2, 2);
	// g.addEdge(0,3);

	cout << g.prim_mst();
	return 0;
}  