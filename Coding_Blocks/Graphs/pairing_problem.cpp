 #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define test(t) while(t--)
#define fo(i,a,n) for(int i = a; i < n; i++)
class Graph
{
	int V;
	list <pair<int,int>>l;
public:
	Graph(int V){
		this->V = V;
	};
	void addEdge(int u, int v){
		l.push_back(make_pair(u,v));
	}

	int findSet(int i, int parent[]){
		if(parent[i] == -1)
			return i;

		//Path Optimisation

		return parent[i] = findSet(parent[i], parent);
	}

	void unionSet(int x, int y, int parent[],int rank[]){
		int s1 = findSet(x, parent);
		int s2 = findSet(y, parent);
		if(s1!=s2){
			if(rank[s1]<rank[s2]){
				rank[s2] += rank[s1];
				parent[s1] = s2;
			}
			else{
				rank[s1] += rank[s2];
				parent[s2] = s1;
			}
		}

	}

	int pairing(){
		int *parent = new int[V];
		int *rank = new int[V];
		fo(i,0,V){
			parent[i] = -1;
			rank[i] = 1;
		}
		int ans = 0;
			for(auto edge: l){
			int i = edge.first;
			int j = edge.second;

			int s1 = findSet(i, parent);
			int s2 = findSet(j, parent);
			unionSet(s1, s2, parent, rank);
			
			}

			fo(i,0,V){
				ans += V - rank[findSet(i, parent)];
			}
			ans/=2;

			delete [] parent;
			delete [] rank;
			return ans;

	}
	// bool contains_cycle(){
	// 	int *parent = new int[V];
	// 	int *rank = new int[V];
	// 	fo(i,0,V){
	// 		parent[i] = -1;
	// 		rank[i] = 1;
	// 	}
	// 	for(auto edge: l){
	// 		int i = edge.first;
	// 		int j = edge.second;

	// 		int s1 = findSet(i, parent);
	// 		int s2 = findSet(j, parent);
	// 		if(s1!= s2){
	// 			unionSet(s1,s2,parent,rank);

	// 		}
	// 		else{
	// 			return true;
	// 		}
	// 	}
	// 	delete [] parent;
	// 	return false;
	// }

	
};
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Graph g(5);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(3,4);
	// g.addEdge(0,3);

	cout << g.pairing();
	return 0;
}  