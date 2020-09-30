#include<bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
}

void BFS(vector<int>adj[], int V){
	bool arr[V];
	for(int i = 1; i <= V; i++)arr[i] = false;
	int s = 1;
	arr[s] = true;
	queue<int> q;
	q.push(s);

	while(!q.empty()){
		int a = q.front();
		q.pop();
		cout << a << " ";
		for(int i = 0; i < adj[a].size(); i++){
			if(arr[adj[a][i]]== false){
				q.push(adj[a][i]);
				arr[adj[a][i]] = true;
			}
		}
	}
	cout << endl;
}

void DFS(vector<int> adj[], int V){
	bool arr[V];
	for(int i = 0; i <= V; i++)arr[i] = false;
	int s = 2;
	arr[s] = true;
	stack<int> s1;
	s1.push(s);
	while(!s1.empty()){
		int a = s1.top();
		s1.pop();
		cout << a << " ";
		for(int i = 0; i < adj[a].size(); i++){
			if(arr[adj[a][i]]==false){
				s1.push(adj[a][i]);
				arr[adj[a][i]] = true;
			}
		}
	}
cout << endl;
}

void topology(vector<int>adj[], bool visited[], int j, stack<int> &s){
	visited[j] = true;

	for(auto i = adj[j].begin(); i != adj[j].end(); i++){
		if(!visited[*i]){
			topology(adj, visited, *i, s);
		}
	}

	s.push(j);
}

void topologicalSort(vector<int> adj[], int V){
	stack<int> s;
	bool visited[V];
	for(int i = 0; i < V; i++){
		visited[i] = false;
	}
	for(int i = 0; i < V; i++){
		if(visited[i] == false)
			topology(adj, visited, i, s);
	}

	while(!s.empty()){
		cout << s.top() << " ";
		s.pop();
	}
	cout << endl;
}

int main(){
	int V = 6;
    vector<int> adj[V+1];
    addEdge(adj,5, 2);
    addEdge(adj,5, 0);
    addEdge(adj,4, 0);
    addEdge(adj,4, 1);
    addEdge(adj,2, 3);
    addEdge(adj,3, 1);

    BFS(adj, V);
    DFS(adj, V);
    topologicalSort(adj, V);
    return 0;
}