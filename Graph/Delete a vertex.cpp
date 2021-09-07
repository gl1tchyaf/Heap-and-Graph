#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void deleteEdge(vector<int> adj[], int u, int v)
{
    adj[u].pop_back();
    adj[v].pop_back();
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
void printGraph2(vector<int> adj[], int V)
{
    for (int v = 0; v < V-1; ++v)
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
    int V = 6;
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
    printGraph(adj, V);

    cout<< "Deleting last vertex" ;
    deleteEdge(adj,1, 5);
    deleteEdge(adj,3, 5);
    printGraph2(adj, V);
    return 0;
}
