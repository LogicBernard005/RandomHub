#include <bits/stdc++.h>
using namespace std;

int minDistance(const vector<int> &dist, const vector<bool> &sptSet)
{
    int min = INT_MAX;
    int min_index = -1;

    for (int v = 0; v < dist.size(); v++)
    {
        if (!sptSet[v] && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }

    return min_index;
}

void printSolution(const vector<int> &dist)
{
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < dist.size(); i++)
    {
        if (dist[i] == INT_MAX)
        {
            cout << i << " \t\t Unreachable" << endl;
        }
        else
        {
            cout << i << " \t\t " << dist[i] << endl;
        }
    }
}

void dijkstra(const vector<vector<int>> &adjMatrix, int source)
{
    int n = adjMatrix.size();
    vector<int> dist(n, INT_MAX);
    vector<bool> sptSet(n, false);

    dist[source] = 0;

    for (int count = 0; count < n - 1; count++)
    {
        int u = minDistance(dist, sptSet);
        sptSet[u] = true;

        for (int v = 0; v < n; v++)
        {
            if (!sptSet[v] && adjMatrix[u][v] && dist[u] != INT_MAX &&
                dist[u] + adjMatrix[u][v] < dist[v])
            {
                dist[v] = dist[u] + adjMatrix[u][v];
            }
        }
    }

    printSolution(dist);
}

int main()
{
    int vertices;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    vector<vector<int>> adjMatrix(vertices, vector<int>(vertices, 0));
    cout << "Enter the adjacency matrix (" << vertices << "x" << vertices << "):" << endl;
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cin >> adjMatrix[i][j];
        }
    }

    int sourceVertex;
    cout << "Enter the source vertex: ";
    cin >> sourceVertex;

    dijkstra(adjMatrix, sourceVertex);

    return 0;
}
