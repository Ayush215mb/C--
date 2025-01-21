#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to find the vertex with the minimum key value that is not yet included in MST
int minKey(vector<int> &key, vector<bool> &inMST, int V)
{
    int min = INT_MAX, minIndex;

    for (int v = 0; v < V; v++)
    {
        if (!inMST[v] && key[v] < min)
        {
            min = key[v];
            minIndex = v;
        }
    }
    return minIndex;
}

// Function to print the edges and weights of the Minimum Spanning Tree
void printMST(vector<int> &parent, vector<vector<int>> &graph, int V)
{
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++)
    {
        cout << parent[i] << " - " << i << "\t" << graph[i][parent[i]] << endl;
    }
}

// Function to implement Prim's algorithm
void primsAlgorithm(vector<vector<int>> &graph, int V)
{
    vector<int> key(V, INT_MAX);  // Key values used to pick minimum weight edge
    vector<bool> inMST(V, false); // To keep track of vertices included in MST
    vector<int> parent(V, -1);    // Array to store constructed MST

    // Start from the first vertex
    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++)
    {
        // Pick the minimum key vertex not yet included in MST
        int u = minKey(key, inMST, V);
        inMST[u] = true;

        // Update the key and parent index of the adjacent vertices
        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] && !inMST[v] && graph[u][v] < key[v])
            {
                key[v] = graph[u][v];
                parent[v] = u;
            }
        }
    }

    // Print the constructed MST
    printMST(parent, graph, V);
}

int main()
{
    int V;
    cout << "Enter the number of vertices: ";
    cin >> V;

    vector<vector<int>> graph(V, vector<int>(V));

    cout << "Enter the adjacency matrix of the graph (use 0 for no edge):\n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cin >> graph[i][j];
        }
    }

    cout << "Minimum Spanning Tree (Prim's Algorithm):\n";
    primsAlgorithm(graph, V);

    return 0;
}
