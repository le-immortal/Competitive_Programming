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
	void addEdge(int x, int y, bool directed = true){
		l[x].push_back(y);
		if(!directed){
			l[y].push_back(x);
		}
	}

	bool cycle_helper(int node, bool *visited, bool *stack){
		visited[node] = true;
		stack[node] = true;

		for(int nbr:l[node]){
			if(stack[nbr]){
				return true;
			}
			if(visited[nbr]==false){
				bool cycle_mila = cycle_helper(nbr, visited, stack);
				if(cycle_mila==true)
					return true;
			}
		}

		stack[node]= false;
		return false   ;
	}

	bool contains_cycle(){
		bool *visited = new bool[V];
		bool *stack = new bool[V];
		fo(i,0,V){
			visited[i] = stack[i] = false;
		}
		return cycle_helper(0, visited, stack);
	}
};
 
int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	Graph g(7);
	g.addEdge(0,1);
	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,4);	
	g.addEdge(4,5); 
	g.addEdge(1,5); 
	g.addEdge(5,6); 
	// g.addEdge(4,2); 

	
	cout << g.contains_cycle() << " Cycle ";
	return 0;
}  