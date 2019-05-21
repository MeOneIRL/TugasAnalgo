#include<bits/stdc++.h> 
using namespace std; 
  
// fungsi untuk menambah edge 
void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 
  
// funsi untuk menampilkan adjecancy list
void printGraph(vector<int> adj[], int V) 
{ 
    for (int v = 0; v < V; ++v) 
    { 
        cout << "\n Adjacency list of vertex "
             << v << "\n head "; 
        for (auto x : adj[v]) 
           cout << "-> " << x; 
        printf("\n"); 
    } 
} 
  
int main() 
{ 
    int V = 5;
	int v,u;
	int i=0; 
	bool lagi;
    vector<int> adj[V]; 
    cout << "Masukan vertex beserta pasanganya!";
	while(true){
    	cout << "\ninput";
		cout << "\nVertex = "; cin >> v; 
    	cout << "Pasangan = "; cin >> u;
    	addEdge (adj, u, v);
    	cout << "\n";
    	cout << "lagi ?"; cin >> lagi;
		if (!lagi)
			break; 
	} 
    printGraph(adj, V); 
    return 0; 
} 
