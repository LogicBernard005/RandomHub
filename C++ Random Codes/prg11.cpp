#include <iostream>
#include <vector>
#include <limits>

using namespace std;

#define INF numeric_limits<int>::max()

void printSolution(const vector<vector<int>> &dist)
{
    cout << "The following matrix shows the shortest distances between every pair of vertices:\n";
    for (const auto &row : dist)
    {
        for (const auto &val : row)
        {
            if (val == INF)
            {
                cout << "INF ";
            }
            else
            {
                cout << val << " ";
            }
        }
        cout << endl;
    }
}

void floydWarshall(vector<vector<int>> &dist)
{
    int n = dist.size();
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dist[i][k] != INF && dist[k][j] != INF &&
                    dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;

    vector<vector<int>> graph(n, vector<int>(n, INF));

    cout << "Enter the adjacency matrix (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int weight;
            cin >> weight;
            if (i == j)
            {
                graph[i][j] = 0;
            }
            else
            {
                graph[i][j] = (weight == -1) ? INF : weight;
            }
        }
    }

    floydWarshall(graph);

    printSolution(graph);

    return 0;
}
