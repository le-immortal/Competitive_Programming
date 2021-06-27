 #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
class DSU{
	int *parent;
	int *rank;

public: 
	DSU(int n){
		parent = new int(n);
		rank = new int(n);
		fo(i,0,n){
			parent[i] = -1;
			rank[i] = 1;
		}
	}

	int findSet(int i){
		if(parent[i] == -1)
			return i;
		return parent[i] = findSet(parent[i]);
	}

	void unionSet(int x, int y){
		int s1 = findSet(x);
		int s2 = findSet(y);

		if(s1 != s2){
			if(rank[s1] < rank[s2]){
				rank[s2] += rank[s1];
				parent[s1] = s2;
			}else{
				rank[s1] += rank[s2];
				parent[s2] = s1;
			}
		}
	}
};

class Graph
{
	vector <vector<int>> edgelist;
	int V;
public:
	Graph(int V){
		this->V = V;
	};

	void addEdge(int x, int y, int w){
		edgelist.push_back({w,x,y});
	}

	int kruskal_mst(){
		// Sort all the edges

		sort(edgelist.begin(), edgelist.end());
		DSU s(V);
		int ans = 0;
		for(auto edge: edgelist){
			int w = edge[0];
			int x = edge[1];
			int y = edge[2];
		
			//take edge in MST if it doesn't form a cycle
			if(s.findSet(x) != s.findSet(y)){
				s.unionSet(x,y);
				ans += w;
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

	cout << g.kruskal_mst();
	return 0;
}  