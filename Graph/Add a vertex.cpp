#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

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
    int V = 7;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    addEdge(adj, 1, 5);
    addEdge(adj, 3, 5);
    cout<<"Adding new vertex in default 6 vertex \n" ;
    cout<< "Input how many connection you want with new vertex: \n";
    int con;
    cin>> con;
    for(int i=0;i<con;i++){
            int u,v;
            cout<<"Enter connecting u :";
            cin>>u;
        addEdge(adj, u, (V-1));
    }
    printGraph(adj, V);
    return 0;
}
